// FUN_01912a0c @ 01912a0c size=568 calls_out=10 calls_in=0
// strings: 

void FUN_01912a0c(int *param_1,int param_2,undefined4 param_3,uint *param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint local_1a8;
  int local_180;
  uint local_17c;
  uint local_178;
  int local_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  uint local_160;
  uint local_15c;
  undefined1 auStack_158 [96];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 auStack_d4 [116];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c;
  undefined1 local_2b;
  
  FUN_0191e124((undefined4 *)(param_2 + 0x110),param_4);
  if ((*param_4 < 0x80000001) && (param_4[3] == 0x8000000e)) {
    local_1a8 = param_4[4];
    bVar1 = true;
    uVar3 = param_4[5];
  }
  else {
    FUN_01bed4e2(&local_160,param_4,0x78);
    FUN_0191d9a0(&local_180,&local_160,&DAT_0052389f,1,&DAT_00523839,1);
    FUN_0190eb24(&local_160);
    if (local_180 != -0x7fffffd7) {
      param_1[3] = local_174;
      param_1[4] = iStack_170;
      param_1[5] = iStack_16c;
      param_1[6] = iStack_168;
      param_1[7] = iStack_164;
      *param_1 = local_180;
      param_1[1] = local_17c;
      param_1[2] = local_178;
      FUN_01912e20(param_2);
      return;
    }
    local_1a8 = local_17c;
    bVar1 = false;
    uVar3 = local_178;
  }
  uVar4 = *(undefined4 *)(param_2 + 0xf8);
  FUN_01bed4e2(auStack_d4,param_2 + 0x84,0x74);
  FUN_01bed4e2(auStack_158,param_2,0x60);
  local_f8 = *(undefined4 *)(param_2 + 0x60);
  uStack_f4 = *(undefined4 *)(param_2 + 100);
  uStack_f0 = *(undefined4 *)(param_2 + 0x68);
  uStack_ec = *(undefined4 *)(param_2 + 0x6c);
  local_e8 = *(undefined4 *)(param_2 + 0x70);
  uStack_e4 = *(undefined4 *)(param_2 + 0x74);
  uStack_e0 = *(undefined4 *)(param_2 + 0x78);
  uStack_dc = *(undefined4 *)(param_2 + 0x7c);
  uStack_d8 = *(undefined4 *)(param_2 + 0x80);
  local_5c = *(undefined4 *)(param_2 + 0xfc);
  uStack_58 = *(undefined4 *)(param_2 + 0x100);
  uStack_54 = *(undefined4 *)(param_2 + 0x104);
  uStack_50 = *(undefined4 *)(param_2 + 0x108);
  uStack_4c = *(undefined4 *)(param_2 + 0x10c);
  local_2c = *(undefined1 *)(param_2 + 300);
  local_48 = *(undefined4 *)(param_2 + 0x110);
  uStack_44 = *(undefined4 *)(param_2 + 0x114);
  uStack_40 = *(undefined4 *)(param_2 + 0x118);
  local_3c = *(undefined4 *)(param_2 + 0x11c);
  uStack_38 = *(undefined4 *)(param_2 + 0x120);
  uStack_34 = *(undefined4 *)(param_2 + 0x124);
  uStack_30 = *(undefined4 *)(param_2 + 0x128);
  local_2b = *(undefined1 *)(param_2 + 0x12d);
  local_160 = local_1a8;
  local_15c = uVar3;
  local_60 = uVar4;
  iVar2 = thunk_FUN_01be5118(0x138);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x138);
  }
  FUN_01bed4e2(iVar2,&local_160,0x138);
  *param_1 = -0x7fffffd7;
  param_1[1] = iVar2;
  param_1[2] = (int)&DAT_01d25110;
  if (bVar1) {
    uVar3 = *param_4;
    if (uVar3 < 0x80000001) {
      if (param_4[3] != 0x8000000e) {
        FUN_0190edf4(param_4 + 3);
        uVar3 = *param_4;
      }
      if (uVar3 != 0x80000000) {
        FUN_0134bd64(uVar3,param_4[1]);
      }
    }
    else {
      FUN_0190eb24(param_4);
    }
  }
  thunk_FUN_01be4678(param_2);
  return;
}

