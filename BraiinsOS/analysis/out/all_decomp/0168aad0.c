// FUN_0168aad0 @ 0168aad0 size=524 calls_out=9 calls_in=0
// strings: 

void FUN_0168aad0(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int local_100;
  int local_fc;
  int local_f8;
  undefined4 local_f4;
  undefined4 local_e8;
  undefined4 local_dc;
  undefined4 local_d0;
  undefined4 local_c4;
  int local_b8;
  int local_b4;
  uint local_b0;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 auStack_68 [72];
  
  uVar1 = 0;
  if (param_4 < 0) {
LAB_0168aaf0:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar1,param_4);
  }
  if (param_4 == 0) {
    local_100 = 0;
    local_fc = 1;
  }
  else {
    local_fc = thunk_FUN_016d4a50(param_4);
    local_100 = param_4;
    if (local_fc == 0) {
      uVar1 = 1;
      goto LAB_0168aaf0;
    }
  }
  FUN_016dd1aa(local_fc,param_3,param_4);
  local_c4 = 0x80000003;
  local_d0 = 0x80000003;
  local_dc = 0x80000003;
  local_e8 = 0x80000003;
  local_f4 = 0x80000003;
  local_f8 = param_4;
  FUN_01676758(auStack_68,&local_100);
  FUN_01681fc0(&local_b8,param_2 + 8,auStack_68);
  if (local_b8 != -0x80000000) {
    FUN_0168248c(local_70,local_6c,&local_b8,param_5);
    *param_1 = 4;
    FUN_00919614(&local_100);
    return;
  }
  uVar2 = *(uint *)(local_b4 + 8);
  if (local_b0 < uVar2) {
    iVar3 = *(int *)(local_b4 + 4) + local_b0 * 0xc0;
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
    uVar2 = *(uint *)(local_b4 + 8);
    if (local_b0 < uVar2) {
      iVar3 = *(int *)(local_b4 + 4) + local_b0 * 0xc0;
      FUN_016dd1aa(param_1,iVar3,0x70);
      FUN_016dd1aa(iVar3,param_5,0x70);
      FUN_00919614(&local_100);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(local_b0,uVar2,&DAT_018add8c);
}

