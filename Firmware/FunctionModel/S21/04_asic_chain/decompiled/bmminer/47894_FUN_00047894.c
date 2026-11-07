// FUN_00047894 @ 00047894  size=468  callers=1
// program: bmminer


void FUN_00047894(void)

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
  char acStack_228 [516];
  
  iVar4 = 0;
  iVar9 = 0;
  iVar5 = 0;
  memset(acStack_228,0,0x200);
  do {
    iVar2 = FUN_0002a6f0(iVar9);
    if (iVar2 != 0) {
      if (DAT_000c965c == 0) {
        DAT_000c965c = FUN_000856dc("bmminer_nonce");
      }
      FUN_000875a0(DAT_000c965c,"asic_response.c",0xf,"dump_nonce_info_all_core",0x18,0x32b,0x14,
                   "\n asic nonce number for chain[%d]...\n",iVar9);
      iVar2 = FUN_0002a514();
      if (0 < iVar2) {
        piVar8 = (int *)(iVar9 * 0x400 + 0xcb684);
        param3 = 0;
        do {
          piVar8 = piVar8 + 1;
          iVar7 = param3 + 1;
          iVar6 = iVar5 + *piVar8;
          iVar5 = snprintf(acStack_228 + iVar4,0x200 - iVar4,"asic[%03d]=%-8d",param3,*piVar8);
          uVar3 = FUN_0002a524();
          FUN_000988ec(iVar7,uVar3);
          iVar4 = iVar4 + iVar5;
          iVar5 = iVar6;
          if (extraout_r1 == 0) {
            if (DAT_000c965c == 0) {
              DAT_000c965c = FUN_000856dc("bmminer_nonce");
            }
            iVar1 = DAT_000c965c;
            uVar3 = FUN_0002a524();
            iVar5 = 0;
            iVar4 = 0;
            pcVar10 = acStack_228;
            uVar3 = FUN_00098658(param3,uVar3);
            FUN_000875a0(iVar1,"asic_response.c",0xf,"dump_nonce_info_all_core",0x18,0x331,0x14,
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

