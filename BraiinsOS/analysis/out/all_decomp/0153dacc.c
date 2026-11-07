// FUN_0153dacc @ 0153dacc size=624 calls_out=8 calls_in=0
// strings: 

void FUN_0153dacc(undefined4 *param_1,int param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  uint local_160;
  uint local_15c;
  undefined1 auStack_158 [4];
  undefined1 auStack_154 [92];
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
  
  FUN_0151eddc((undefined4 *)(param_2 + 0x110),param_4);
  uVar6 = *param_4;
  if ((uVar6 < 0x80000001) && (param_4[3] == 0x8000000e)) {
    uVar1 = param_4[4];
    uVar4 = param_4[5];
    uVar2 = *(undefined4 *)(param_2 + 0xf8);
    FUN_016dd1aa(auStack_d4,param_2 + 0x84,0x74);
    FUN_016dd1aa(auStack_158,param_2,0x60);
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
    local_160 = uVar1;
    local_15c = uVar4;
    local_60 = uVar2;
    iVar3 = thunk_FUN_016d4a50(0x138);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x138);
    }
    FUN_016dd1aa(iVar3,&local_160,0x138);
    *param_1 = 0x80000029;
    param_1[1] = iVar3;
    param_1[2] = &DAT_018a7aa8;
    if ((uVar6 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(param_4[1]);
      thunk_FUN_016d3fb4(param_2);
      return;
    }
    goto LAB_0153dbf8;
  }
  puVar5 = &local_160;
  FUN_016dd1aa(puVar5,param_4,0x78);
  iVar3 = 1;
  FUN_015622b4(&local_180,puVar5,&DAT_0040c784,1,&DAT_0040c0b3,1);
  if (0x80000000 < local_160) {
    iVar3 = local_160 + 0x7fffffff;
  }
  uVar6 = local_15c;
  switch(iVar3) {
  case 0:
  case 3:
    break;
  case 1:
    FUN_015396bc(auStack_154);
    uVar6 = local_160;
    if (local_160 != 0x80000000) {
joined_r0x0153dcf0:
      if (uVar6 != 0) {
        thunk_FUN_016d3fb4(puVar5[1]);
      }
    }
    break;
  case 2:
    if (local_15c != 0x80000000) {
      puVar5 = (uint *)((uint)puVar5 | 4);
      goto joined_r0x0153dcf0;
    }
    break;
  default:
    if (local_15c != 0x80000000) {
      puVar5 = (uint *)((uint)&local_160 | 4);
      goto joined_r0x0153dcf0;
    }
  }
  param_1[3] = local_174;
  param_1[4] = uStack_170;
  param_1[5] = uStack_16c;
  param_1[6] = uStack_168;
  param_1[7] = uStack_164;
  *param_1 = local_180;
  param_1[1] = local_17c;
  param_1[2] = local_178;
  FUN_0153d6e4(param_2);
LAB_0153dbf8:
  thunk_FUN_016d3fb4(param_2);
  return;
}

