// FUN_016b5248 @ 016b5248 size=340 calls_out=4 calls_in=0
// strings: conflicting transitionmultiple epsilon transitions to match state | conflicting transitionmultiple epsilon transitions to match state

void FUN_016b5248(int *param_1,int param_2,int param_3,undefined4 *param_4,int param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  ulonglong uVar5;
  int local_68;
  int local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  FUN_016b53a4(&local_68,param_2,*param_4);
  if (local_68 == 0x30) {
    local_5c = (uint)*(byte *)(param_4 + 1);
    local_60 = param_2 + 0x18c;
    uVar1 = local_64 << 0xb;
    local_58 = local_58 & 0xffffff00;
    local_64 = *(byte *)((int)param_4 + 5) + 1;
    local_68 = 1;
    do {
      while( true ) {
        do {
          uVar2 = FUN_016c2cec(&local_68);
          if ((uVar2 & 0xff) == 2) {
            *param_1 = 0x30;
            return;
          }
        } while ((uVar2 & 1) != 0);
        uVar5 = FUN_016b5490(param_2,param_3,uVar2 >> 8);
        uVar4 = param_6 | uVar1 | (uint)*(byte *)(param_2 + 0x28c) << 10;
        if (0x7ffffffffff < uVar5) break;
        uVar2 = (uint)*(byte *)(param_2 + 0x2c + (uVar2 >> 8 & 0xff)) +
                (param_3 << (*(uint *)(param_2 + 0x130) & 0x1f));
        if (*(uint *)(param_2 + 0x14) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar2,*(uint *)(param_2 + 0x14),&DAT_01d089e8);
        }
        piVar3 = (int *)(*(int *)(param_2 + 0x10) + uVar2 * 8);
        *piVar3 = param_5;
        piVar3[1] = uVar4;
      }
    } while ((int)uVar5 == param_5 && (uint)(uVar5 >> 0x20) == uVar4);
    *param_1 = 0x2f;
    param_1[1] = (int)"conflicting transitionmultiple epsilon transitions to match state";
    param_1[2] = 0x16;
  }
  else {
    param_1[2] = local_60;
    param_1[3] = local_5c;
    param_1[4] = local_58;
    param_1[5] = iStack_54;
    param_1[6] = local_50;
    param_1[7] = iStack_4c;
    param_1[8] = iStack_48;
    param_1[9] = iStack_44;
    param_1[10] = iStack_40;
    param_1[0xb] = local_3c;
    param_1[0xc] = iStack_38;
    param_1[0xd] = iStack_34;
    param_1[0xe] = iStack_30;
    param_1[0xf] = iStack_2c;
    *param_1 = local_68;
    param_1[1] = local_64;
  }
  return;
}

