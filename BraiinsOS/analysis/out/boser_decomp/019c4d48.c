// FUN_019c4d48 @ 019c4d48 size=568 calls_out=4 calls_in=2
// strings: 

void FUN_019c4d48(int param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,
                 uint param_6,uint param_7,uint param_8,undefined4 param_9,undefined4 param_10,
                 undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,
                 undefined4 param_15,undefined4 param_16,undefined4 param_17,undefined4 param_18,
                 undefined4 param_19,undefined4 param_20,uint param_21,uint param_22,uint param_23,
                 uint param_24,undefined4 *param_25,undefined4 *param_26)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_74;
  
  uVar5 = 0;
  if (param_3 < 0) {
LAB_019c4d68:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,param_3);
  }
  if (param_3 == 0) {
    iVar1 = 1;
    local_74 = 0;
  }
  else {
    uVar5 = 1;
    iVar1 = FUN_01298504(param_3,1);
    if (iVar1 == 0) goto LAB_019c4d68;
    local_74 = param_3;
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  FUN_01bed93e(param_1,0,0x50);
  uVar5 = param_25[1];
  uVar4 = param_25[2];
  *(undefined4 *)(param_1 + 200) = *param_25;
  *(undefined4 *)(param_1 + 0xcc) = uVar5;
  *(undefined4 *)(param_1 + 0xd0) = uVar4;
  uVar5 = param_26[1];
  uVar4 = param_26[2];
  *(undefined4 *)(param_1 + 0xd4) = *param_26;
  *(undefined4 *)(param_1 + 0xd8) = uVar5;
  *(undefined4 *)(param_1 + 0xdc) = uVar4;
  *(undefined4 *)(param_1 + 0x70) = param_13;
  *(undefined4 *)(param_1 + 0x74) = param_14;
  *(undefined4 *)(param_1 + 0x78) = param_15;
  *(undefined4 *)(param_1 + 0x7c) = param_16;
  *(undefined4 *)(param_1 + 0x80) = param_17;
  *(undefined4 *)(param_1 + 0x84) = param_18;
  *(undefined4 *)(param_1 + 0x88) = param_19;
  *(undefined4 *)(param_1 + 0x8c) = param_20;
  *(undefined4 *)(param_1 + 0x6c) = param_12;
  *(undefined4 *)(param_1 + 0x68) = param_11;
  *(undefined4 *)(param_1 + 100) = param_10;
  *(undefined4 *)(param_1 + 0x60) = param_9;
  iVar2 = param_7 - param_23;
  *(uint *)(param_1 + 0x98) = param_23;
  iVar3 = param_8 - (param_24 + (param_23 > param_7));
  *(uint *)(param_1 + 0x9c) = param_24;
  *(int *)(param_1 + 0xc0) = iVar1;
  if (param_8 <= param_24 && (uint)(param_23 <= param_7) <= param_8 - param_24) {
    iVar2 = 0;
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x58) = iVar2;
  *(int *)(param_1 + 0x5c) = iVar3;
  iVar1 = param_5 - param_21;
  *(uint *)(param_1 + 0x90) = param_21;
  *(uint *)(param_1 + 0x94) = param_22;
  iVar2 = param_6 - (param_22 + (param_21 > param_5));
  *(int *)(param_1 + 0xc4) = param_3;
  if (param_6 <= param_22 && (uint)(param_21 <= param_5) <= param_6 - param_22) {
    iVar1 = 0;
    iVar2 = 0;
  }
  *(int *)(param_1 + 0x50) = iVar1;
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0xbc) = local_74;
  FUN_01bed93e(param_1 + 0xa0,0,0x1c);
  return;
}

