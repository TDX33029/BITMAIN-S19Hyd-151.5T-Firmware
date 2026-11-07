// FUN_00de8e20 @ 00de8e20 size=784 calls_out=11 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage

undefined4 FUN_00de8e20(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 local_104;
  undefined1 auStack_100 [80];
  undefined1 auStack_b0 [24];
  int local_98;
  undefined4 local_94;
  undefined1 *local_80;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 *local_30;
  undefined4 uStack_2c;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: unexpected stage",0x75,&DAT_018ace94);
  }
  uVar8 = thunk_FUN_016de0ee(0,0x40);
  iVar6 = (int)uVar8 + (int)((ulonglong)uVar8 >> 0x20);
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar7 = *(undefined4 *)(param_1 + 0xc);
  if (*(char *)(iVar6 + 0x38) != '\x01') {
    uVar5 = 0;
    local_104 = 0;
    if (*(char *)(iVar6 + 0x38) == '\x02') goto LAB_00de8e9c;
    FUN_015e8e6c(iVar6,FUN_01655ec4);
    *(undefined1 *)(iVar6 + 0x38) = 1;
  }
  uVar5 = *(undefined4 *)(iVar6 + 0x1c);
  local_104 = *(undefined4 *)(iVar6 + 0x18);
  *(undefined4 *)(iVar6 + 0x18) = uVar4;
  *(undefined4 *)(iVar6 + 0x1c) = uVar7;
LAB_00de8e9c:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x80)) {
  case 0:
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x20);
    break;
  case 1:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xde8f14);
    (*pcVar1)();
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187998c);
  case 3:
    goto switchD_00de8eb4_caseD_3;
  case 4:
    goto switchD_00de8eb4_caseD_4;
  case 5:
    goto switchD_00de8eb4_caseD_5;
  }
  while( true ) {
    FUN_01656eb8(auStack_b0,&DAT_0187999c,1,0,0,&DAT_0187999c);
    FUN_016dd1aa(auStack_100,auStack_b0,0x50);
    FUN_016dd1aa(param_1 + 0x88,auStack_100,0x50);
switchD_00de8eb4_caseD_3:
    iVar3 = FUN_01657fc4(param_1 + 0x88,*param_2);
    if (iVar3 != 0) {
      *(undefined1 *)(param_1 + 0x80) = 3;
      cVar2 = *(char *)(iVar6 + 0x38);
      goto joined_r0x00de911c;
    }
    FUN_00a07b4c(param_1 + 0x88);
    (**(code **)(*(int *)(param_1 + 0x34) + 0x20))
              (*(int *)(param_1 + 0x30) + (*(int *)(*(int *)(param_1 + 0x34) + 8) - 1U & 0xfffffff8)
               + 8);
    uVar4 = (**(code **)(extraout_r1 + 0x1c))();
    *(undefined4 *)(param_1 + 0x88) = uVar4;
    *(undefined1 *)(param_1 + 0x94) = 0;
switchD_00de8eb4_caseD_4:
    FUN_00de925c(&local_60,param_1 + 0x88,param_2);
    if (local_30 == &DAT_3b9aca00) {
      *(undefined1 *)(param_1 + 0x80) = 4;
      cVar2 = *(char *)(iVar6 + 0x38);
      goto joined_r0x00de911c;
    }
    *(undefined4 *)(param_1 + 0x48) = local_60;
    *(undefined4 *)(param_1 + 0x4c) = uStack_5c;
    *(undefined4 *)(param_1 + 0x50) = uStack_58;
    *(undefined4 *)(param_1 + 0x54) = uStack_54;
    *(undefined4 *)(param_1 + 0x58) = local_50;
    *(undefined4 *)(param_1 + 0x5c) = uStack_4c;
    *(undefined4 *)(param_1 + 0x60) = uStack_48;
    *(undefined4 *)(param_1 + 100) = uStack_44;
    *(undefined4 *)(param_1 + 0x68) = uStack_40;
    *(undefined4 *)(param_1 + 0x6c) = local_3c;
    *(undefined4 *)(param_1 + 0x70) = uStack_38;
    *(undefined4 *)(param_1 + 0x74) = uStack_34;
    *(undefined1 **)(param_1 + 0x78) = local_30;
    *(undefined4 *)(param_1 + 0x7c) = uStack_2c;
    if ((*(char *)(param_1 + 0x94) == '\x03') && (*(int *)(param_1 + 0x8c) != 0)) {
      FUN_00e43e74(*(int *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90),1);
    }
    (**(code **)(*(int *)(param_1 + 0x34) + 0x20))
              (*(int *)(param_1 + 0x30) + (*(int *)(*(int *)(param_1 + 0x34) + 8) - 1U & 0xfffffff8)
               + 8);
    uVar4 = (**(code **)(extraout_r1_00 + 0x20))();
    *(undefined4 *)(param_1 + 0x88) = uVar4;
    *(undefined1 *)(param_1 + 0x94) = 0;
switchD_00de8eb4_caseD_5:
    FUN_00de925c(auStack_b0,param_1 + 0x88,param_2);
    uVar4 = local_94;
    iVar3 = local_98;
    if (local_80 == &DAT_3b9aca00) break;
    if ((*(char *)(param_1 + 0x94) == '\x03') && (*(int *)(param_1 + 0x8c) != 0)) {
      FUN_00e43e74(*(int *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90),1);
    }
    if (iVar3 != 0) {
      thunk_FUN_016d3fb4(uVar4);
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 100));
    }
  }
  *(undefined1 *)(param_1 + 0x80) = 5;
  cVar2 = *(char *)(iVar6 + 0x38);
joined_r0x00de911c:
  if (cVar2 != '\x01') {
    if (cVar2 == '\x02') {
      return 1;
    }
    FUN_015e8e6c(iVar6,FUN_01655ec4);
    *(undefined1 *)(iVar6 + 0x38) = 1;
  }
  *(undefined4 *)(iVar6 + 0x18) = local_104;
  *(undefined4 *)(iVar6 + 0x1c) = uVar5;
  return 1;
}

