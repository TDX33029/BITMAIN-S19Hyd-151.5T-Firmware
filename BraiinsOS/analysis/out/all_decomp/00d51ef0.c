// FUN_00d51ef0 @ 00d51ef0 size=852 calls_out=9 calls_in=2
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_00d51ef0(undefined4 *param_1,int param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  uint uVar4;
  char *pcVar5;
  double dVar6;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int **local_80;
  undefined4 local_7c;
  int *local_78;
  int *local_74;
  undefined **local_70;
  undefined *local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined *local_50;
  undefined4 local_4c;
  int ***local_48;
  undefined1 *local_44;
  int *local_40;
  undefined4 *local_3c;
  int ***local_38;
  int local_34;
  
  uVar4 = *(uint *)(param_2 + 0x588);
  iVar3 = 2;
  if ((uint)(uVar4 < 5) <= (uint)-*(int *)(param_2 + 0x58c)) {
    iVar3 = uVar4 - 5;
  }
  if (iVar3 != 0) {
    if (iVar3 != 1) {
      FUN_00c709f8(&local_74,param_2 + 0x288);
                    /* WARNING: Could not recover jumptable at 0x00d521d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00d521dc + *(int *)(&DAT_00d521dc + uVar4 * 4)))();
      return;
    }
    dVar6 = *(double *)(param_2 + 0x590);
    FUN_00c709f8(&local_74,param_2 + 0x288);
    local_80 = (int **)((uint)(0.0 < dVar6) * (int)(longlong)dVar6);
    FUN_00c043dc(&local_68,&DAT_00357999,1,local_70,local_6c);
    local_48 = &local_80;
    local_3c = &DAT_006043a8;
    local_44 = &LAB_00fac484;
    local_40 = &local_68;
    FUN_00600d2c(&local_90,&DAT_00570dec,&local_48);
    if (local_68 != 0) {
      thunk_FUN_016d3fb4(local_64);
    }
    if (local_74 != (int *)0x0) {
      thunk_FUN_016d3fb4(local_70);
    }
    param_1[4] = 5;
    *(double *)(param_1 + 6) = dVar6;
    param_1[5] = 0;
    *param_1 = local_90;
    param_1[1] = uStack_8c;
    param_1[2] = uStack_88;
    iVar3 = 0x20;
    goto LAB_00d522e0;
  }
  if ((DAT_018d9130 < 4) && (DAT_018da0c4 != '\0')) {
    if (DAT_018da0c4 == '\x01') {
LAB_00d52048:
      DataMemoryBarrier(0xb);
      pcVar5 = s_SetGloba_00414c05;
      puVar1 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar5 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0))
      {
        pcVar5 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      iVar3 = (**(code **)(puVar1 + 0x14))(pcVar5,DAT_018da0bc);
      if (iVar3 == 0) goto LAB_00d5220c;
    }
    else if (DAT_018da0c4 != '\x02') {
      cVar2 = FUN_0169ac90(&DAT_018da0bc,param_2,0,-(*(int *)(param_2 + 0x58c) + (uint)(uVar4 >= 5))
                          );
      if (cVar2 == '\0') goto LAB_00d5220c;
      if (cVar2 != '\x02') goto LAB_00d52048;
    }
    local_34 = DAT_018da0bc;
    if (*(int *)(DAT_018da0bc + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018778a0);
    }
    local_70 = &local_50;
    local_64 = *(undefined4 *)(DAT_018da0bc + 0x20);
    local_60 = *(undefined4 *)(DAT_018da0bc + 0x24);
    local_5c = *(undefined4 *)(DAT_018da0bc + 0x28);
    local_78 = (int *)(DAT_018da0bc + 0x1c);
    local_68 = *local_78;
    local_74 = &local_68;
    local_80 = &local_74;
    local_38 = &local_80;
    local_58 = 0;
    local_7c = 1;
    local_6c = &DAT_018abb78;
    local_4c = 0x85;
    local_50 = &DAT_003571d5;
    local_44 = (undefined1 *)0x0;
    local_48 = (int ***)0x1;
    DataMemoryBarrier(0xb);
    pcVar5 = s_SetGloba_00414c05;
    puVar1 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar5 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar5 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar3 = (**(code **)(puVar1 + 0x28))(pcVar5,&local_48);
    if (iVar3 != 0) {
      (**(code **)(puVar1 + 0x2c))(pcVar5,&local_48);
    }
    unaff_r7 = 0;
    unaff_r8 = 6;
    iVar3 = 0x10;
  }
  else {
LAB_00d5220c:
    unaff_r7 = 0;
    unaff_r8 = 6;
    iVar3 = 0x10;
  }
LAB_00d522e0:
  *(undefined4 *)((int)param_1 + iVar3) = unaff_r8;
  ((undefined4 *)((int)param_1 + iVar3))[1] = unaff_r7;
  return;
}

