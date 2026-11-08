// FUN_00050ef8 @ 00050ef8  size=308  callers=1
// program: bmminer


void FUN_00050ef8(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int param3;
  int local_2428;
  undefined1 auStack_2424 [2];
  short local_2422;
  int iStack_2420;
  int local_241c [257];
  char acStack_2018 [8192];
  
  param3 = 0;
  bVar1 = false;
  do {
    iVar2 = FUN_0002a6f0(param3);
    if (iVar2 != 0) {
      local_2428 = 0;
      FUN_0001c934(param3,(undefined1)DAT_000c94e8,&local_2428);
      if (local_2428 == 0x230) {
        FUN_0001ddc4(param3,0x23a);
        memset(auStack_2424,0,0x40c);
        FUN_0001d4fc(param3,auStack_2424);
        if (local_2422 != 0) {
          local_2422 = local_2422 + 10;
          piVar3 = &iStack_2420;
          do {
            piVar3 = piVar3 + 1;
            *piVar3 = *piVar3 + 10;
          } while (local_241c + 0xff != piVar3);
          FUN_0001ccc8(param3,auStack_2424);
        }
        if (3 < DAT_000be63c) {
          snprintf(acStack_2018,0x2000,"fix chain %d to 570M\n",param3);
          FUN_0004948c(3,acStack_2018,0);
        }
        bVar1 = true;
      }
    }
    param3 = param3 + 1;
  } while (param3 != 4);
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  return;
}

