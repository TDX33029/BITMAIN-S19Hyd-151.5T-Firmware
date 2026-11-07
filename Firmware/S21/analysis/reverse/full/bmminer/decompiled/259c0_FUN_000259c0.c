// FUN_000259c0 @ 000259c0  size=356  callers=0
// program: bmminer


undefined4 FUN_000259c0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint param3;
  uint local_2024;
  char acStack_2020 [8196];
  
  iVar2 = FUN_00057d1c(&local_2024);
  if (iVar2 == 0) {
    iVar2 = 0;
    do {
      iVar3 = FUN_0002a6f0(iVar2);
      if (iVar3 != 0) {
        memset(&DAT_00943ae0 + iVar2 * 0x100,0,0x400);
        iVar3 = FUN_0001c934(iVar2,(undefined1)DAT_000c94e8,&DAT_00943ae0 + iVar2 * 0x100);
        if (iVar3 != 0) {
LAB_00025a4c:
          FUN_00056e88(3,0xff);
          FUN_0004e8c8(0xd,"Get frequency failed!");
          return 0xffffffff;
        }
        cVar1 = FUN_0002a514();
        if (cVar1 != '\0') {
          param3 = (&DAT_00943ae0)[iVar2 * 0x100];
          if (local_2024 < param3) {
LAB_00025ac0:
            if (3 < DAT_000be63c) {
              snprintf(acStack_2020,0x2000,"Freq(%d) > Max_freq(%d), invalid!\n",param3,local_2024);
              FUN_0004948c(3,acStack_2020,0);
            }
            goto LAB_00025a4c;
          }
          puVar5 = &DAT_00943ae4 + iVar2 * 0x100;
          while (&DAT_00943ae4 + iVar2 * 0x100 + (uint)(byte)(cVar1 - 1) != puVar5) {
            param3 = *puVar5;
            puVar5 = puVar5 + 1;
            if (local_2024 < param3) goto LAB_00025ac0;
          }
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    uVar4 = 0;
  }
  else {
    FUN_00056e88(3,0xff);
    FUN_0004e8c8(0xd,"Get max freq failed!");
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

