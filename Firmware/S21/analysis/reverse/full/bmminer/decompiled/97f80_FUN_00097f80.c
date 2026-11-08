// FUN_00097f80 @ 00097f80  size=1120  callers=1
// program: bmminer


int * FUN_00097f80(int param_1)

{
  int *piVar1;
  int iVar2;
  char local_2020 [4100];
  int local_101c;
  byte local_1018 [4100];
  int local_14;
  int *local_10;
  uint local_c;
  
  local_10 = (int *)0x0;
  local_101c = 0;
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/level.c",0x4d,"line is null or 0");
    return (int *)0x0;
  }
  memset(local_1018,0,0x1001);
  memset(local_2020,0,0x1001);
  local_14 = __isoc99_sscanf(param_1," %[^= \t] = %d ,%s",local_1018,&local_101c,local_2020);
  if (local_14 < 2) {
    FUN_00095b4c(2,"src/level.c",0x54,"level[%s], syntax wrong",param_1);
    return (int *)0x0;
  }
  if ((local_101c < 0) || (0xff < local_101c)) {
    FUN_00095b4c(2,"src/level.c",0x5a,"l[%d] not in [0,255], wrong",local_101c);
    return (int *)0x0;
  }
  if (local_1018[0] == 0) {
    FUN_00095b4c(2,"src/level.c",0x5f,"str[0] = 0");
    return (int *)0x0;
  }
  local_10 = calloc(1,0x810);
  if (local_10 == (int *)0x0) {
    piVar1 = __errno_location();
    FUN_00095b4c(2,"src/level.c",0x65,"calloc fail, errno[%d]",*piVar1);
    return (int *)0x0;
  }
  *local_10 = local_101c;
  if (local_2020[0] == '\0') {
    local_10[0x203] = 7;
  }
  else {
    iVar2 = FUN_00097dec(local_2020);
    local_10[0x203] = iVar2;
    if (local_10[0x203] == -0xbb) {
      FUN_00095b4c(2,"src/level.c",0x71,"syslog_level_atoi fail");
      goto LAB_0009839c;
    }
  }
  for (local_c = 0; (local_c < 0x400 && (local_1018[local_c] != 0)); local_c = local_c + 1) {
    iVar2 = toupper((uint)local_1018[local_c]);
    *(char *)((int)local_10 + local_c + 4) = (char)iVar2;
    iVar2 = tolower((uint)local_1018[local_c]);
    *(char *)((int)local_10 + local_c + 0x405) = (char)iVar2;
  }
  if (local_1018[local_c] == 0) {
    *(undefined1 *)((int)local_10 + local_c + 4) = 0;
    *(undefined1 *)((int)local_10 + local_c + 0x405) = 0;
    local_10[0x202] = local_c;
    return local_10;
  }
  FUN_00095b4c(2,"src/level.c",0x7e,"not enough space for str, str[%s] > %d",local_1018,local_c);
LAB_0009839c:
  FUN_00095b4c(2,"src/level.c",0x8a,"line[%s]",param_1);
  FUN_00097d78(local_10);
  return (int *)0x0;
}

