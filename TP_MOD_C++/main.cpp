#include "queue.h"

int main()
{
    playlistLagu Q;
    infotype A;
    adr B;
    createPlaylist_1301213187(Q);
    // N = 10 //
    A.Artis = "Yoasobi";
    A.Judul = "Comet";
    createElement_1301213187(A, B);
    enqueue_1301213187(Q, B);
    A.Artis = "Yoasobi";
    A.Judul = "Yasashi Suishei";
    createElement_1301213187(A, B);
    enqueue_1301213187(Q, B);
    A.Artis = "Yoasobi";
    A.Judul = "RGB";
    createElement_1301213187(A, B);
    enqueue_1301213187(Q, B);
    A.Artis = "Yoasobi";
    A.Judul = "Love Letter";
    createElement_1301213187(A, B);
    enqueue_1301213187(Q, B);
    A.Artis = "Yoasobi";
    A.Judul = "Halzion";
    createElement_1301213187(A, B);
    enqueue_1301213187(Q, B);
    A.Artis = "Yoasobi";
    A.Judul = "Tracing that dream";
    createElement_1301213187(A, B);
    enqueue_1301213187(Q, B);
    A.Artis = "Yoasobi";
    A.Judul = "Yoru ni Kakeru";
    createElement_1301213187(A, B);
    enqueue_1301213187(Q, B);
    A.Artis = "Yoasobi";
    A.Judul = "Swallow";
    createElement_1301213187(A, B);
    enqueue_1301213187(Q, B);
    A.Artis = "Yoasobi";
    A.Judul = "The blessing";
    createElement_1301213187(A, B);
    enqueue_1301213187(Q, B);
    A.Artis = "Yoasobi";
    A.Judul = "Tabun";
    createElement_1301213187(A, B);
    enqueue_1301213187(Q, B);

    showSemuaLagu_1301213187(Q);
    cout << endl;
    dequeue_1301213187(Q, B);
    showSemuaLagu_1301213187(Q);


    return 0;
}
