#include "queue.h"

void createPlaylist_1301213187(playlistLagu &Q){
    Head(Q) = NULL;
    Tail(Q) = NULL;
}

void createElement_1301213187(infotype laguBaru, adr &pLagu){
    pLagu = new element;
    info(pLagu).Artis = laguBaru.Artis;
    info(pLagu).Judul = laguBaru.Judul;
    next(pLagu) = NULL;
}

void enqueue_1301213187(playlistLagu &Q, adr pLagu){
    if(Tail(Q) == NULL){
        Head(Q) = pLagu;
        Tail(Q) = pLagu;
    }else {
        next(Tail(Q)) = pLagu;
        Tail(Q) = pLagu;
    }
}

void dequeue_1301213187(playlistLagu &Q, adr &pLagu){
    if(Head(Q) == NULL){
        cout << "Queue Empty" << endl;
    }else if(Head(Q) == Tail(Q)){
        pLagu = Head(Q);
        Head(Q) = NULL;
        Tail(Q) = NULL;
    }else{
        pLagu = Head(Q);
        Head(Q) = next(pLagu);
        next(pLagu) = NULL;
    }
}
void showSemuaLagu_1301213187(playlistLagu Q){
    adr pLagu;
    pLagu = Head(Q);
    while(pLagu != NULL){
        cout << info(pLagu).Artis << " ";
        cout << info(pLagu).Judul << endl;
        pLagu = next(pLagu);
    }
}
