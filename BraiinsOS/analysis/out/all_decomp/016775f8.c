// FUN_016775f8 @ 016775f8 size=800 calls_out=12 calls_in=0
// strings: 

void FUN_016775f8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_2c8 [88];
  undefined1 auStack_270 [104];
  int local_208;
  int local_204;
  int local_200;
  undefined4 local_1fc;
  undefined4 local_1f0;
  undefined4 local_1e4;
  undefined4 local_1d8;
  undefined4 local_1cc;
  undefined4 local_1c0 [2];
  undefined1 auStack_1b8 [104];
  int local_150;
  int local_14c;
  uint local_148;
  undefined4 local_108;
  undefined4 local_104;
  int local_100 [2];
  undefined1 auStack_f8 [104];
  int local_90 [2];
  undefined1 auStack_88 [84];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_01670f7c(local_100,param_5);
  if (local_100[0] != 4) {
    FUN_016dd1aa(local_90,local_100,0x70);
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,local_90,&DAT_018ad894,&DAT_018ad930);
  }
  FUN_016dd1aa(auStack_270,auStack_f8,0x68);
  uVar1 = 0;
  if (param_4 < 0) {
LAB_01677648:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar1,param_4);
  }
  if (param_4 == 0) {
    iVar3 = 0;
    local_204 = 1;
  }
  else {
    local_204 = thunk_FUN_016d4a50(param_4);
    if (local_204 == 0) {
      uVar1 = 1;
      goto LAB_01677648;
    }
    iVar3 = param_4;
  }
  FUN_016dd1aa(local_204,param_3,param_4);
  local_1cc = 0x80000003;
  local_1d8 = 0x80000003;
  local_1e4 = 0x80000003;
  local_1f0 = 0x80000003;
  local_1fc = 0x80000003;
  local_208 = iVar3;
  local_200 = param_4;
  FUN_016dd1aa(auStack_1b8,auStack_270,0x68);
  local_1c0[0] = 1;
  FUN_01676758(local_90,&local_208);
  FUN_01681fc0(&local_150,param_2,local_90);
  if (local_150 == -0x80000000) {
    uVar2 = *(uint *)(local_14c + 8);
    if (uVar2 <= local_148) {
LAB_01677910:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(local_148,uVar2,&DAT_018add8c);
    }
    iVar3 = *(int *)(local_14c + 4) + local_148 * 0xc0;
    if ((*(int *)(iVar3 + 0x7c) != -0x7ffffffd) && (0 < *(int *)(iVar3 + 0x7c))) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0x80));
    }
    *(undefined4 *)(iVar3 + 0x7c) = 0x80000003;
    if ((*(int *)(iVar3 + 0x88) != -0x7ffffffd) && (0 < *(int *)(iVar3 + 0x88))) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0x8c));
    }
    *(undefined4 *)(iVar3 + 0x88) = 0x80000003;
    if ((*(int *)(iVar3 + 0x94) != -0x7ffffffd) && (0 < *(int *)(iVar3 + 0x94))) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0x98));
    }
    *(undefined4 *)(iVar3 + 0x94) = 0x80000003;
    if ((*(int *)(iVar3 + 0xa0) != -0x7ffffffd) && (0 < *(int *)(iVar3 + 0xa0))) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0xa4));
    }
    *(undefined4 *)(iVar3 + 0xa0) = 0x80000003;
    if ((*(int *)(iVar3 + 0xac) != -0x7ffffffd) && (0 < *(int *)(iVar3 + 0xac))) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0xb0));
    }
    *(undefined4 *)(iVar3 + 0xac) = 0x80000003;
    uVar2 = *(uint *)(local_14c + 8);
    if (uVar2 <= local_148) goto LAB_01677910;
    iVar3 = *(int *)(local_14c + 4) + local_148 * 0xc0;
    FUN_016dd1aa(local_100,iVar3,0x70);
    FUN_016dd1aa(iVar3,local_1c0,0x70);
    FUN_01670f7c(local_90,local_100);
    if (local_90[0] == 4) {
      FUN_016dd1aa(auStack_2c8,auStack_88,0x54);
      FUN_00919614(&local_208);
      if (local_34 != 8) {
        param_1[0x18] = local_30;
        param_1[0x19] = uStack_2c;
        param_1[0x1a] = uStack_28;
        param_1[0x1b] = uStack_24;
        FUN_016dd1aa((uint)local_90 | 4,auStack_2c8,0x54);
        *param_1 = 1;
        FUN_016dd1aa(param_1 + 1,local_90,0x58);
        param_1[0x17] = local_34;
        return;
      }
      goto LAB_016778b8;
    }
    FUN_01677a20(local_90);
  }
  else {
    FUN_0168248c(local_108,local_104,&local_150,local_1c0);
  }
  FUN_00919614(&local_208);
LAB_016778b8:
  *param_1 = 4;
  return;
}

