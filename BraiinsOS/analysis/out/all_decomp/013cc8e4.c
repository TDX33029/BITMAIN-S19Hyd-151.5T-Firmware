// FUN_013cc8e4 @ 013cc8e4 size=304 calls_out=5 calls_in=1
// strings: 

void FUN_013cc8e4(int param_1,undefined4 *param_2)

{
  ushort uVar1;
  ushort extraout_r1;
  int iVar2;
  int unaff_r10;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 local_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  uint local_1f0;
  int iStack_1ec;
  int local_1e8;
  int local_1e4;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [60];
  
  if (param_2[1] == 0) {
    *(undefined1 *)(param_1 + 0xc) = 2;
    return;
  }
  iVar2 = param_2[1];
  if (iVar2 == 1) {
    uVar1 = (ushort)*(byte *)*param_2;
    local_228 = 0x80000000;
  }
  else {
    FUN_013814c0(&local_228,*param_2,iVar2);
    if ((local_1f0 & 1) == 0) {
      if (local_1e8 == 0) {
        unaff_r10 = 1;
      }
      else {
        unaff_r10 = thunk_FUN_016d4a50(local_1e8);
        if (unaff_r10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(1,local_1e8);
        }
      }
      FUN_016dd1aa(unaff_r10,iStack_1ec,local_1e8);
    }
    else {
      unaff_r10 = iStack_1ec;
    }
    local_98 = local_228;
    uStack_94 = local_224;
    uStack_90 = uStack_220;
    uStack_8c = uStack_21c;
    local_88 = local_218;
    uStack_84 = uStack_214;
    uStack_80 = uStack_210;
    uStack_7c = uStack_20c;
    uStack_78 = uStack_208;
    local_74 = local_204;
    uStack_70 = uStack_200;
    uStack_6c = uStack_1fc;
    uStack_68 = uStack_1f8;
    uStack_64 = uStack_1f4;
    FUN_016dd1aa((uint)auStack_60 | 1,&local_98,0x38);
    local_228 = 0x80000003;
    uVar1 = extraout_r1;
  }
  local_224 = CONCAT22(local_224._2_2_,uVar1) & 0xffff00ff;
  local_224._0_3_ = (uint3)(ushort)local_224;
  FUN_016dd1aa((uint)&local_228 | 7,auStack_60,0x39);
  local_1e8 = 1;
  local_1e4 = unaff_r10;
  FUN_013cbcc8(param_1,&local_228,iVar2);
  return;
}

