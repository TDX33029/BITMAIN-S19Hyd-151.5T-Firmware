// FUN_013b0800 @ 013b0800 size=300 calls_out=4 calls_in=1
// strings: internal error: entered unreachable code

void FUN_013b0800(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined **local_30;
  undefined4 *puStack_2c;
  int iStack_28;
  undefined4 local_24;
  
  cVar1 = *param_2;
  if (cVar1 == '\x01') {
    if (param_2[1] != '\0') {
      piVar4 = (int *)&DAT_0053278b;
      goto LAB_013b0854;
    }
    piVar4 = &DAT_0056dc34;
LAB_013b0884:
    iVar5 = 4;
    if (*piVar4 != 0x70747468) goto LAB_013b089c;
    puVar3 = &DAT_0056dc34;
LAB_013b08b8:
    local_24 = 0;
    local_30 = &PTR_FUN_01cf00a4;
    puStack_2c = puVar3;
    iStack_28 = iVar5;
  }
  else {
    if (cVar1 != '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf3fe0);
    }
    piVar4 = *(int **)(*(int *)(param_2 + 4) + 4);
    iVar5 = *(int *)(*(int *)(param_2 + 4) + 8);
    if (iVar5 == 5) {
LAB_013b0854:
      iVar5 = 5;
      puVar3 = (undefined4 *)&DAT_0053278b;
      iVar2 = thunk_FUN_01bed842(piVar4,&DAT_0053278b,5);
      if (iVar2 == 0) goto LAB_013b08b8;
    }
    else if (iVar5 == 4) goto LAB_013b0884;
LAB_013b089c:
    FUN_012834b0(&local_30,piVar4,iVar5);
  }
  iVar5 = *(int *)(param_1 + 0x14);
  if (iVar5 != 0) {
    (**(code **)(iVar5 + 0x10))
              (param_1 + 0x20,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  }
  *(int *)(param_1 + 0x14) = (int)local_30;
  *(undefined4 **)(param_1 + 0x18) = puStack_2c;
  *(int *)(param_1 + 0x1c) = iStack_28;
  *(undefined4 *)(param_1 + 0x20) = local_24;
  FUN_017726bc(cVar1,*(undefined4 *)(param_2 + 4));
  return;
}

