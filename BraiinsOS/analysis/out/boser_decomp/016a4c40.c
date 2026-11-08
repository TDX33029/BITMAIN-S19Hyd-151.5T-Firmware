// FUN_016a4c40 @ 016a4c40 size=680 calls_out=10 calls_in=0
// strings: invalid match span

void FUN_016a4c40(int *param_1,int *param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  uint extraout_r3;
  uint uVar3;
  uint uVar4;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  uint uStack_38;
  undefined1 local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  
  if (*param_4 - 1U < 2) {
    if (param_2[0x254] == 2) {
      if (*param_2 == 2 && param_2[1] == 0) goto LAB_016a4e2c;
      if (*(int *)(param_3 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d08054);
      }
      FUN_0169e7e8(&local_4c,param_2,param_3 + 0xd8,param_4);
    }
    else {
      FUN_0169e238(&local_4c,param_2 + 0x144,param_4);
    }
    if (local_4c != 2) {
      param_1[2] = local_44;
      *param_1 = local_4c;
      param_1[1] = local_48;
      param_1[3] = local_40;
      return;
    }
    FUN_016c2dec(local_48);
    goto LAB_016a4e2c;
  }
  local_34 = (undefined1)param_4[6];
  local_44 = param_4[2];
  local_40 = param_4[3];
  iStack_3c = param_4[4];
  uVar4 = param_4[5];
  local_4c = 1;
  uStack_38 = uVar4;
  if (param_2[0x254] == 2) {
    if (*param_2 == 2 && param_2[1] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_004ce4ac,0x95,&DAT_01d07f64);
    }
    if (*(int *)(param_3 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d08074);
    }
    uVar3 = 0;
    if (*(char *)(param_2[0x140] + 0x15a) == '\x01') {
      uVar3 = (uint)*(byte *)(param_2[0x140] + 0x15b);
    }
    FUN_016834b8(&local_30,param_2 + 0xa2,param_3 + 0x198,&local_4c);
    if ((local_30 == 2) ||
       (((local_30 & uVar3 & 1) != 0 &&
        (FUN_01687260(&local_30,&local_4c,local_2c,local_28,local_28,param_2 + 0xa2,param_3 + 0x198)
        , local_30 == 2)))) goto LAB_016a4d98;
  }
  else {
    iVar2 = param_2[0x29f];
    cVar1 = *(char *)((int)param_2 + 0xa7d);
    FUN_0168111c(&local_30,param_2 + 0x1f2,&local_4c);
    if ((local_30 == 2) ||
       ((((local_30 & 1) != 0 && ((char)iVar2 != '\0' && cVar1 != '\0')) &&
        (FUN_016873fc(&local_30,&local_4c,local_2c,local_28,local_28,param_2 + 0x1f2), local_30 == 2
        )))) {
LAB_016a4d98:
      local_2c = FUN_016c2dec(local_2c);
      local_30 = 2;
      local_28 = extraout_r3;
    }
  }
  if (local_30 != 2) {
    if ((local_30 & 1) == 0) {
      *param_1 = 0;
      return;
    }
    if (uVar4 < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("invalid match span",0x25,&DAT_01d08164);
    }
    param_1[3] = local_2c;
    *param_1 = 1;
    param_1[1] = local_28;
    param_1[2] = uVar4;
    return;
  }
LAB_016a4e2c:
  FUN_0169e4e0(param_1,param_2,param_3,param_4);
  return;
}

