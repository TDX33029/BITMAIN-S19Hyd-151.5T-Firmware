// FUN_00ce07ec @ 00ce07ec size=348 calls_out=4 calls_in=1
// strings: 

void FUN_00ce07ec(uint *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint local_80;
  uint local_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined1 auStack_38 [20];
  
  iVar3 = param_3 * 0x48;
  if (0x1c71c71 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar3);
  }
  if (iVar3 == 0) {
    local_7c = 8;
    local_80 = 0;
  }
  else {
    local_7c = thunk_FUN_016d4a50(iVar3);
    if (local_7c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,iVar3);
    }
    local_80 = param_3;
    if (param_3 != 0) {
      uVar1 = 0;
      uVar2 = local_7c;
      do {
        if (iVar3 == 0) break;
        FUN_00cce358(auStack_38,param_2[0xf],param_2[0x10]);
        local_58 = param_2[6];
        local_40 = *(undefined8 *)(param_2 + 0xc);
        uStack_54 = param_2[7];
        local_50 = param_2[8];
        local_48 = param_2[10];
        local_44 = *(undefined1 *)(param_2 + 0xb);
        local_70 = *param_2;
        uStack_6c = param_2[1];
        uStack_68 = param_2[2];
        uStack_64 = param_2[3];
        uStack_60 = param_2[4];
        uStack_5c = param_2[5];
        FUN_016dd1aa(uVar2,&local_70,0x48);
        uVar1 = uVar1 + 1;
        uVar2 = uVar2 + 0x48;
        iVar3 = iVar3 + -0x48;
        param_2 = param_2 + 0x12;
      } while (param_3 != uVar1);
    }
  }
  *param_1 = local_80;
  param_1[1] = local_7c;
  param_1[2] = param_3;
  return;
}

