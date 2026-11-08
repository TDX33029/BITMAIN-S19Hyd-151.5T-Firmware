// FUN_01015504 @ 01015504 size=876 calls_out=6 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_01015504(undefined2 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 **local_78;
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined **local_68;
  undefined *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined *local_4c;
  uint **local_48;
  uint local_44;
  uint *local_40;
  code *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_28;
  int local_24;
  
  if (*(char *)(param_4 + 0xee) == '\0') {
LAB_01015540:
    uVar5 = (uint)*(byte *)(param_4 + 0x20);
    if ((5 < uVar5) || ((*(byte *)(param_4 + 0xe9) & 1) != 0)) {
      if ((5 < uVar5 - 6) && ((uVar5 < 3 && (uVar5 != 0)))) {
        if (uVar5 == 1) {
          (**(code **)(*(int *)(param_4 + 0x28) + 0x10))
                    (param_4 + 0x34,*(undefined4 *)(param_4 + 0x2c),*(undefined4 *)(param_4 + 0x30))
          ;
        }
        else if ((*(uint *)(param_4 + 0x24) & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_4 + 0x28));
        }
      }
      *(undefined4 *)(param_4 + 0x24) = param_2;
      *(undefined4 *)(param_4 + 0x28) = param_3;
      *(undefined2 *)(param_4 + 0x20) = 0x200;
    }
    iVar3 = *(int *)(param_4 + 0x40);
    *(undefined4 *)(param_4 + 0x40) = 0;
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 4))(*(undefined4 *)(param_4 + 0x44));
    }
    iVar3 = *(int *)(param_4 + 0x50);
    *(undefined4 *)(param_4 + 0x50) = 0;
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 4))(*(undefined4 *)(param_4 + 0x54));
    }
    iVar3 = *(int *)(param_4 + 0x58);
    *(undefined4 *)(param_4 + 0x58) = 0;
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 4))(*(undefined4 *)(param_4 + 0x5c));
    }
    *(undefined1 *)param_1 = 3;
    return;
  }
  uVar5 = *(uint *)(param_5 + 0x20);
  if (*(uint *)(param_5 + 0x24) < uVar5) {
    *(uint *)(param_5 + 0x24) = *(uint *)(param_5 + 0x24) + 1;
    goto LAB_01015540;
  }
  if ((3 < DAT_018d9130) || (DAT_018da430 == '\0')) goto LAB_01015788;
  if (DAT_018da430 == '\x01') {
LAB_0101560c:
    DataMemoryBarrier(0xb);
    pcVar4 = s_SetGloba_00414c05;
    puVar1 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar4 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar4 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar3 = (**(code **)(puVar1 + 0x14))(pcVar4,DAT_018da428);
    if (iVar3 == 0) goto LAB_01015788;
  }
  else if (DAT_018da430 != '\x02') {
    cVar2 = FUN_0169ac90(&DAT_018da428);
    if (cVar2 == '\0') goto LAB_01015788;
    if (cVar2 != '\x02') goto LAB_0101560c;
  }
  local_24 = DAT_018da428;
  if (*(int *)(DAT_018da428 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01882408);
  }
  local_5c = *(undefined4 *)(DAT_018da428 + 0x20);
  local_58 = *(undefined4 *)(DAT_018da428 + 0x24);
  local_54 = *(undefined4 *)(DAT_018da428 + 0x28);
  local_6c = &local_60;
  local_68 = &local_4c;
  local_48 = &local_40;
  local_70 = (undefined4 *)(DAT_018da428 + 0x1c);
  local_60 = *local_70;
  local_40 = &local_44;
  local_78 = &local_6c;
  local_50 = 0;
  local_64 = &DAT_018abb78;
  local_4c = &DAT_0057cb71;
  local_3c = FUN_007883b8;
  local_74 = 1;
  local_34 = 0;
  local_38 = 1;
  DataMemoryBarrier(0xb);
  pcVar4 = s_SetGloba_00414c05;
  puVar1 = &DAT_018ae394;
  if ((DAT_018dd984 == 2) && (pcVar4 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
    pcVar4 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
  }
  local_44 = uVar5;
  local_28 = (undefined1 *)&local_78;
  iVar3 = (**(code **)(puVar1 + 0x28))(pcVar4,&local_38);
  if (iVar3 != 0) {
    (**(code **)(puVar1 + 0x2c))(pcVar4,&local_38);
  }
LAB_01015788:
  *param_1 = 0x101;
  *(undefined4 *)(param_1 + 2) = 0xb;
  *(undefined ***)(param_1 + 4) = &PTR_LAB_01882418;
  *(char **)(param_1 + 6) = "too_many_resets";
  *(undefined4 *)(param_1 + 8) = 0xf;
  *(undefined4 *)(param_1 + 10) = 0;
  return;
}

