class Actor
{

    public:
        int x, y; //pozicija zemelapyje;
        int ch ; //veikejo kodas;
        TCODColor col; //spalva

        const char *name; //name
                          //
        Actor (int x, int y, int ch, const char *name, const TCODColor &col);
        void update();
        bool moveOrAttack(int x, int y);
        void render() const;
};
