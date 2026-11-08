// FUN_01ab0f54 @ 01ab0f54 size=444 calls_out=3 calls_in=2
// strings: 

/* WARNING: Control flow encountered bad instruction data */

void FUN_01ab0f54(uint *param_1,undefined1 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 unaff_r10;
  undefined4 extraout_r12;
  bool bVar7;
  bool bVar8;
  uint local_5b8;
  uint local_5b4;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined2 local_410;
  undefined1 local_40e;
  undefined2 local_2b0;
  undefined1 local_2ae;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  
  uVar4 = param_3 * 0x20;
  bVar8 = 0x7fffffe < param_3;
  bVar7 = param_3 == 0x7ffffff;
  uVar5 = 0;
  if (param_3 < 0x8000000) {
    bVar8 = 0x7ffffff7 < uVar4;
    bVar7 = uVar4 == 0x7ffffff8;
  }
  if (!bVar8 || bVar7) {
    if (uVar4 == 0) {
      local_5b4 = 8;
      local_5b8 = 0;
    }
    else {
      uVar5 = 8;
      local_5b4 = FUN_01298504(uVar4,8);
      if (local_5b4 == 0) goto LAB_01ab0f74;
      local_5b8 = param_3;
      if (param_3 != 0) {
        puVar2 = param_2 + param_3 * 0x20;
        iVar3 = 0;
        uVar4 = param_3;
        do {
          if (param_2 == puVar2) break;
          uVar5 = FUN_006666fc(&local_5a8,*(undefined4 *)(param_2 + 0x14),
                               *(undefined4 *)(param_2 + 0x18));
          uVar1 = *param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(uVar1) {
          case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar4 = uVar4 - 1;
          param_2 = param_2 + 0x20;
          local_158 = local_5a8;
          uStack_154 = uStack_5a4;
          uStack_150 = uStack_5a0;
          local_2ae = local_40e;
          local_2b0 = local_410;
          puVar6 = (undefined1 *)(local_5b4 + iVar3 * 0x20);
          *puVar6 = uVar1;
          *(undefined2 *)(puVar6 + 1) = local_410;
          *(undefined4 *)(puVar6 + 8) = uVar5;
          puVar6[3] = local_40e;
          *(undefined4 *)(puVar6 + 4) = unaff_r10;
          *(undefined4 *)(puVar6 + 0xc) = extraout_r12;
          *(undefined4 *)(puVar6 + 0x10) = local_5a8;
          *(undefined4 *)(puVar6 + 0x14) = uStack_5a4;
          *(undefined4 *)(puVar6 + 0x18) = uStack_5a0;
          iVar3 = iVar3 + 1;
        } while (uVar4 != 0);
      }
    }
    *param_1 = local_5b8;
    param_1[1] = local_5b4;
    param_1[2] = param_3;
    return;
  }
LAB_01ab0f74:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar5,uVar4);
}

