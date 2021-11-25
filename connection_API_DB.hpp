#include "user.hpp"
#include "storage.hpp"
// Валидация входного домена
// Проверка на то, существует ли такой id
//      Если существует, то проверить на совпадение и внести изменения
//      Если не существует, то создать и внести в хранилище

class connection_API_DB {
    public:
        virtual int check_empty(article_t *article) = 0;
        virtual int check_match_id(article_t *article, connection_t *connection) = 0;
        virtual int add_article(article_t *article, connection_t *connection) = 0;
        virtual int change_article(article_t *artille, connection_t *connection) = 0;
};
