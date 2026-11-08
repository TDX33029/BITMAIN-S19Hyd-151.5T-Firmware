// FUN_010e9cd4 @ 010e9cd4 size=392 calls_out=6 calls_in=0
// strings: 

void FUN_010e9cd4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_504;
  uint local_500;
  int local_4fc;
  int local_4f8;
  int iStack_4f4;
  int iStack_4f0;
  int iStack_4ec;
  int local_4e8;
  int iStack_4e4;
  int iStack_4e0;
  int iStack_4dc;
  int iStack_4d8;
  int local_4d0 [147];
  int local_284;
  int local_280;
  uint local_27c;
  int local_278;
  int local_274;
  int iStack_270;
  int iStack_26c;
  int local_268;
  int local_264;
  int iStack_260;
  int iStack_25c;
  int iStack_258;
  int iStack_254;
  
  uVar4 = *(undefined4 *)(param_3 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar6 = *(undefined4 *)(param_2 + 8);
  uVar7 = *(undefined4 *)(param_2 + 0x1c);
  uVar5 = *(undefined4 *)(param_3 + 0x18);
  uVar2 = *(undefined4 *)(param_3 + 0x1c);
  FUN_01011abc(&local_280,uVar4,1,*(undefined1 *)(param_3 + 0x24),*(undefined1 *)(param_3 + 0x27),
               *(undefined1 *)(param_3 + 0x25),*(undefined1 *)(param_3 + 0x26),param_3,uVar5,uVar2);
  if (local_280 == 1) {
    local_4fc = local_278;
    local_500 = local_27c;
  }
  else {
    FUN_016dd1aa((uint)local_4d0 | 4,&local_274,0x24c);
    local_4d0[0] = local_278;
    iVar1 = FUN_016d6590(uVar7,0xc250b407,local_4d0);
    if (iVar1 == -1) {
      local_4fc = FUN_0126ead8();
      local_500 = local_500 & 0xffffff00;
    }
    else {
      FUN_010117c8(&local_504,uVar3,uVar6,uVar5,uVar2,uVar4);
      if (local_504 != -0x80000000) {
        local_274 = local_4f8;
        iStack_270 = iStack_4f4;
        iStack_26c = iStack_4f0;
        local_268 = iStack_4ec;
        local_264 = local_4e8;
        iStack_260 = iStack_4e4;
        iStack_25c = iStack_4e0;
        iStack_258 = iStack_4dc;
        iStack_254 = iStack_4d8;
        local_280 = local_504;
        local_27c = local_500;
        local_278 = local_4fc;
        if (local_284 == -1) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_0056a6c8,8,&DAT_018a9884);
        }
        *param_1 = local_504;
        param_1[1] = local_500;
        param_1[2] = local_4fc;
        param_1[3] = local_4f8;
        param_1[4] = iStack_4f4;
        param_1[5] = iStack_4f0;
        param_1[6] = iStack_4ec;
        param_1[7] = local_4e8;
        param_1[8] = iStack_4e4;
        param_1[9] = iStack_4e0;
        param_1[10] = iStack_4dc;
        param_1[0xb] = iStack_4d8;
        param_1[0xc] = local_284;
        return;
      }
    }
  }
  *param_1 = -0x80000000;
  param_1[1] = local_500;
  param_1[2] = local_4fc;
  return;
}

