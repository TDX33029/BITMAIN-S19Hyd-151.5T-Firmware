// FUN_019a6924 @ 019a6924 size=440 calls_out=8 calls_in=3
// strings: 

void FUN_019a6924(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint local_298;
  uint local_294;
  undefined4 *local_290 [4];
  undefined4 *local_280;
  int local_224;
  undefined4 local_220;
  uint local_21c;
  undefined1 auStack_218 [388];
  int local_94;
  undefined4 local_90;
  undefined1 auStack_88 [104];
  
  uVar1 = *(byte *)(param_2 + 4) - 1 & 0xff;
  if ((uVar1 < 0xc) && ((0xaabU >> uVar1 & 1) != 0)) {
    local_290[0] = *(undefined4 **)(&DAT_00538d18 + uVar1 * 4);
  }
  else {
    FUN_019a66e4(&local_224,*(undefined4 *)(param_2[6] + 0xc),*(undefined4 *)(param_2[6] + 0x10),
                 *param_2,param_2[1] + -1);
    if (local_21c >> 7 < 3) {
      FUN_01bed4e2(auStack_218,local_220,local_21c);
      auStack_218[local_21c] = 0;
      FUN_012fbc58(&local_94,auStack_218,local_21c + 1);
      if (local_94 == 1) {
        local_290[0] = &DAT_01d27a70;
        local_294 = 2;
        local_298 = 1;
      }
      else {
        FUN_01bed93e(auStack_88,0,0x68);
        iVar2 = FUN_01bf05e6(local_90,auStack_88);
        if (iVar2 == -1) {
          local_290[0] = (undefined4 *)FUN_01be3244();
          local_290[0] = (undefined4 *)*local_290[0];
          local_294 = local_294 & 0xffffff00;
        }
        else {
          FUN_01bed4e2(local_290,auStack_88,0x68);
        }
        local_298 = (uint)(iVar2 == -1);
      }
    }
    else {
      FUN_0199f70c(&local_298,local_220,local_21c,FUN_019a6850);
    }
    if (local_224 != 0) {
      thunk_FUN_01be4678(local_220);
    }
    if (local_298 == 0) {
      local_290[0] = local_280;
    }
    else if ((local_294 & 0xff) != 4) {
      *param_1 = local_294;
      param_1[1] = (uint)local_290[0];
      return;
    }
  }
  param_1[1] = (uint)local_290[0];
  *(undefined1 *)param_1 = 4;
  return;
}

