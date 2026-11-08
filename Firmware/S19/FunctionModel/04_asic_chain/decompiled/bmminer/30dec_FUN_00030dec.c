// FUN_00030dec @ 00030dec  size=484  callers=1
// program: bmminer


void FUN_00030dec(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  int iVar4;
  int param3;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  char acStack_128 [260];
  
  iVar4 = 0;
  iVar9 = 0;
  iVar5 = 0;
  memset(acStack_128,0,0x100);
  do {
    iVar2 = FUN_000201d8(iVar9);
    if (iVar2 != 0) {
      if (DAT_0008a9b0 == 0) {
        DAT_0008a9b0 = FUN_0005b008("bmminer_nonce");
      }
      FUN_0005c5c4(DAT_0008a9b0,"asic_response.c",0xf,"dump_nonce_info_all_core",0x18,0x264,0x14,
                   "\n asic nonce number for chain[%d]...\n",iVar9);
      iVar2 = FUN_0002002c();
      if (0 < iVar2) {
        piVar8 = (int *)(iVar9 * 0x400 + 0x8a9c0);
        param3 = 0;
        do {
          piVar8 = piVar8 + 1;
          iVar7 = param3 + 1;
          iVar6 = iVar5 + *piVar8;
          iVar5 = snprintf(acStack_128 + iVar4,0x100 - iVar4,"asic[%03d]=%-8d",param3,*piVar8);
          uVar3 = FUN_0002003c();
          FUN_0006769c(iVar7,uVar3);
          iVar4 = iVar4 + iVar5;
          iVar5 = iVar6;
          if (extraout_r1 == 0) {
            if (DAT_0008a9b0 == 0) {
              DAT_0008a9b0 = FUN_0005b008("bmminer_nonce");
            }
            iVar1 = DAT_0008a9b0;
            uVar3 = FUN_0002003c();
            iVar5 = 0;
            iVar4 = 0;
            pcVar10 = acStack_128;
            uVar3 = FUN_00067408(param3,uVar3);
            FUN_0005c5c4(iVar1,"asic_response.c",0xf,"dump_nonce_info_all_core",0x18,0x26a,0x14,
                         "domain %02d %s total=%-8u",uVar3,pcVar10,iVar6);
          }
          param3 = iVar7;
        } while (iVar7 != iVar2);
      }
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 4);
  return;
}

