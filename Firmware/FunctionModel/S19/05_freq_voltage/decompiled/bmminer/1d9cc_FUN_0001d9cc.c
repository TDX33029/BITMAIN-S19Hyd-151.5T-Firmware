// FUN_0001d9cc @ 0001d9cc  size=356  callers=0
// program: bmminer


undefined4 FUN_0001d9cc(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint param3;
  uint local_824;
  char acStack_820 [2052];
  
  iVar2 = FUN_0003b854(&local_824);
  if (iVar2 == 0) {
    iVar2 = 0;
    do {
      iVar3 = FUN_000201d8(iVar2);
      if (iVar3 != 0) {
        memset(&DAT_005063f0 + iVar2 * 0x100,0,0x400);
        iVar3 = FUN_0001ba18(iVar2,(undefined1)DAT_0008a848,&DAT_005063f0 + iVar2 * 0x100);
        if (iVar3 != 0) {
LAB_0001da58:
          FUN_0003a9e0(3,0xff);
          FUN_00036380(0xc,"Get frequency failed!");
          return 0xffffffff;
        }
        cVar1 = FUN_0002002c();
        if (cVar1 != '\0') {
          param3 = (&DAT_005063f0)[iVar2 * 0x100];
          if (local_824 < param3) {
LAB_0001dacc:
            if (3 < DAT_00087bbc) {
              snprintf(acStack_820,0x800,"Freq(%d) > Max_freq(%d), invalid!\n",param3,local_824);
              FUN_00032218(3,acStack_820,0);
            }
            goto LAB_0001da58;
          }
          puVar5 = &DAT_005063f4 + iVar2 * 0x100;
          while (&DAT_005063f4 + iVar2 * 0x100 + (uint)(byte)(cVar1 - 1) != puVar5) {
            param3 = *puVar5;
            puVar5 = puVar5 + 1;
            if (local_824 < param3) goto LAB_0001dacc;
          }
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    uVar4 = 0;
  }
  else {
    FUN_0003a9e0(3,0xff);
    FUN_00036380(0xc,"Get max freq failed!");
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

