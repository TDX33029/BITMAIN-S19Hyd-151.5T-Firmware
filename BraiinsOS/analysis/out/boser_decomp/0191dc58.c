// FUN_0191dc58 @ 0191dc58 size=500 calls_out=7 calls_in=3
// strings: 

void FUN_0191dc58(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,short *param_7,int param_8)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 in_CY;
  bool bVar8;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int iStack_114;
  int local_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  undefined4 local_e0;
  undefined4 local_dc;
  int local_a8 [2];
  undefined1 auStack_a0 [124];
  
  sVar1 = *(short *)(param_6 + 0xe);
  sVar2 = *(short *)(param_6 + 0xc);
  uVar5 = FUN_01908aec(sVar2,sVar1);
  bVar8 = (uVar5 & 0xfc) != 0;
  if (bVar8) {
    uVar5 = (uVar5 & 0xffff) >> 8;
    in_CY = 1 < uVar5;
  }
  if ((bool)in_CY && (bVar8 && uVar5 != 2)) {
    if (param_8 != 0) {
      param_8 = param_8 * 0xc;
      do {
        if ((*param_7 == sVar2) && ((sVar2 != 0xd || (param_7[1] == sVar1)))) {
          if (*(int *)(param_7 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(0,0,&DAT_01d25324);
          }
          uVar7 = **(undefined4 **)(param_7 + 2);
          iVar6 = (*(undefined4 **)(param_7 + 2))[1];
          FUN_01aefc50(local_a8,param_4,param_5);
          if (local_a8[0] != 0) {
            FUN_01917d68(&local_120,auStack_a0);
            *param_1 = local_120;
            param_1[1] = local_11c;
            param_1[2] = local_118;
            param_1[3] = iStack_114;
            param_1[4] = local_110;
            param_1[5] = iStack_10c;
            param_1[6] = iStack_108;
            param_1[7] = iStack_104;
            return;
          }
          FUN_01bed4e2((uint)&local_128 | 4,(uint)local_a8 | 4,0x7c);
          iVar4 = local_120;
          iVar3 = local_124;
          FUN_01aedbe8(local_a8,uVar7,*(undefined4 *)(iVar6 + 0x10),*(undefined4 *)(iVar6 + 0x14),
                       local_e0,local_dc,param_2,param_3,*(undefined4 *)(param_6 + 4),
                       *(undefined4 *)(param_6 + 8));
          if ((local_a8[0] == -0x7fffffd3) ||
             (FUN_01917d68(&local_128,local_a8), local_128 == -0x7fffffd7)) {
            *param_1 = -0x7fffffd7;
          }
          else {
            *param_1 = local_128;
            param_1[1] = local_124;
            param_1[2] = local_120;
            param_1[3] = local_11c;
            param_1[4] = local_118;
            param_1[5] = iStack_114;
            param_1[6] = local_110;
            param_1[7] = iStack_10c;
          }
          if (iVar3 == -0x80000000) {
            return;
          }
          FUN_0134bd64(iVar3,iVar4);
          return;
        }
        param_8 = param_8 + -0xc;
        param_7 = param_7 + 6;
      } while (param_8 != 0);
    }
    *param_1 = (int)&DAT_8000001c;
    param_1[1] = 0x3e;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0x3e;
    *param_1 = (int)&DAT_8000001c;
  }
  return;
}

