char	canonb[CANBSIZ];
int	coremap[CMAPSIZ];
int	swapmap[SMAPSIZ];
int	*rootdir;
int	execnt;
int	lbolt;
int	time[2];
int	tout[2];
struct	callo
{
	int	c_time;
	int	c_arg;
	int	(*c_func)();
} callout[NCALL];
struct	mount
{
	int	m_dev;
	int	*m_bufp;
	int	*m_inodp;
} mount[NMOUNT];
int	mpid;
char	runin;
char	runout;
char	runrun;
int	maxmem;
int	*lks;
int	rootdev;
int	swapdev;
int	swplo;
int	nswap;
int	updlock;
int	rablock;
