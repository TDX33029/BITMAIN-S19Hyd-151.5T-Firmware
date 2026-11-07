// FUN_010c8790 @ 010c8790 size=640 calls_out=8 calls_in=2
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_010c8790(undefined1 param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined1 local_c9;
  undefined4 **local_c8;
  undefined4 local_c4;
  undefined4 *local_c0;
  undefined4 *local_bc;
  undefined **local_b8;
  undefined *local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined *local_98;
  undefined1 **local_94;
  undefined1 *local_90;
  undefined1 *local_8c;
  int local_88 [4];
  undefined4 ***local_78;
  int local_74;
  undefined1 local_6b;
  undefined1 local_68;
  
  local_c9 = param_1;
  if ((3 < DAT_018d9130) || (DAT_018da538 == '\0')) goto LAB_010c8980;
  if (DAT_018da538 == '\x01') {
LAB_010c8808:
    DataMemoryBarrier(0xb);
    pcVar5 = s_SetGloba_00414c05;
    puVar1 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar5 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar5 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar3 = (**(code **)(puVar1 + 0x14))(pcVar5,DAT_018da530);
    if (iVar3 == 0) goto LAB_010c8980;
  }
  else if (DAT_018da538 != '\x02') {
    cVar2 = FUN_0169ac90(&DAT_018da530);
    if (cVar2 == '\0') goto LAB_010c8980;
    if (cVar2 != '\x02') goto LAB_010c8808;
  }
  local_74 = DAT_018da530;
  if (*(int *)(DAT_018da530 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01885138);
  }
  local_ac = *(undefined4 *)(DAT_018da530 + 0x20);
  local_a8 = *(undefined4 *)(DAT_018da530 + 0x24);
  local_a4 = *(undefined4 *)(DAT_018da530 + 0x28);
  local_bc = &local_b0;
  local_b8 = &local_98;
  local_94 = &local_90;
  local_c0 = (undefined4 *)(DAT_018da530 + 0x1c);
  local_b0 = *local_c0;
  local_90 = &local_c9;
  local_c8 = &local_bc;
  local_78 = &local_c8;
  local_a0 = 0;
  local_b4 = &DAT_018abb78;
  local_98 = &DAT_00597d90;
  local_8c = &LAB_010a60dc;
  local_c4 = 1;
  local_88[1] = 0;
  local_88[0] = 1;
  DataMemoryBarrier(0xb);
  pcVar5 = s_SetGloba_00414c05;
  puVar1 = &DAT_018ae394;
  if ((DAT_018dd984 == 2) && (pcVar5 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
    pcVar5 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
  }
  iVar3 = (**(code **)(puVar1 + 0x28))(pcVar5,local_88);
  if (iVar3 != 0) {
    (**(code **)(puVar1 + 0x2c))(pcVar5,local_88);
  }
LAB_010c8980:
  local_88[0] = 3;
  local_68 = 4;
  local_88[1] = 0;
  local_88[2] = 0;
  local_6b = 2;
  iVar3 = thunk_FUN_016d4a50(0x68);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x68);
  }
  FUN_016dd1aa(iVar3,local_88,0x68);
  local_88[0] = iVar3;
  piVar4 = (int *)thunk_FUN_016d4a50(4);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  *piVar4 = iVar3;
  return;
}

