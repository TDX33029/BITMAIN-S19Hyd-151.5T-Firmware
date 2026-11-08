// FUN_00d50c30 @ 00d50c30 size=3692 calls_out=29 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_00d50c30(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  bool bVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int *local_9b0;
  int local_9ac;
  undefined4 local_9a8;
  int local_9a0;
  int local_99c;
  undefined4 local_998;
  undefined4 local_994;
  undefined4 local_990;
  undefined4 uStack_98c;
  int local_690;
  int iStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  uint local_620;
  int local_61c;
  int local_370;
  int local_36c;
  int *local_318;
  code *local_314;
  undefined4 local_310;
  
  FUN_00d51ef0(&local_9b0,param_1);
  if (local_9a0 == 6 && local_99c == 0) {
    FUN_00d4ff98(param_2);
    return;
  }
  uVar1 = 0;
  local_690 = local_9a0;
  iStack_68c = local_99c;
  uStack_688 = local_998;
  uStack_684 = local_994;
  uStack_680 = local_990;
  uStack_67c = uStack_98c;
  uVar7 = *(uint *)(param_1 + 0x570);
  bVar11 = 0x7fffffe < uVar7;
  bVar10 = uVar7 == 0x7ffffff;
  uVar8 = uVar7 * 0x20;
  if (uVar7 < 0x8000000) {
    bVar11 = 0x7ffffff7 < uVar8;
    bVar10 = uVar8 == 0x7ffffff8;
  }
  if (!(bVar11 && !bVar10)) {
    iVar5 = *(int *)(param_1 + 0x56c);
    if (uVar8 == 0) {
      iVar2 = 8;
      local_620 = 0;
    }
    else {
      iVar2 = thunk_FUN_016d4a50(uVar8);
      local_620 = uVar7;
      if (iVar2 == 0) {
        uVar1 = 8;
        goto LAB_00d50ccc;
      }
    }
    local_61c = iVar2;
    if (uVar7 != 0) {
      piVar9 = (int *)(iVar5 + 0x40);
      iVar5 = 0;
      uVar8 = 0;
      do {
        local_370 = piVar9[-8];
        local_36c = piVar9[-7];
        iVar6 = piVar9[-0xc];
        uVar1 = *(undefined4 *)(*piVar9 + 200);
        uVar12 = *(undefined8 *)(piVar9 + -10);
        local_9ac = 1;
        local_9a8 = 0;
        local_9b0 = (int *)0x0;
        local_314 = FUN_00face00;
        local_318 = &local_370;
        iVar3 = FUN_00fa948c(&local_9b0,&DAT_018725a4,&DAT_0056a358,&local_318);
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_318,
                       &DAT_018725bc,&DAT_018af130);
        }
        puVar4 = (undefined8 *)(iVar2 + iVar5);
        iVar5 = iVar5 + 0x20;
        piVar9 = piVar9 + 0x14;
        uVar13 = 0;
        if (iVar6 != 0) {
          uVar13 = uVar12;
        }
        local_318 = local_9b0;
        local_314 = (code *)local_9ac;
        local_310 = local_9a8;
        *puVar4 = uVar13;
        iVar3 = iVar2 + uVar8 * 0x20;
        uVar8 = uVar8 + 1;
        *(int **)(iVar3 + 8) = local_9b0;
        *(int *)(iVar3 + 0xc) = local_9ac;
        *(undefined4 *)(iVar3 + 0x10) = local_9a8;
        *(undefined4 *)(iVar3 + 0x14) = uVar1;
        *(undefined4 *)(iVar3 + 0x18) = 0;
      } while (uVar7 != uVar8);
    }
    FUN_016dd1aa(&local_9b0,param_2,800);
    iVar5 = 5;
    if ((uint)(local_9b0 < (int *)0x2) <= (uint)-local_9ac) {
      iVar5 = (int)local_9b0 - 2;
    }
                    /* WARNING: Could not recover jumptable at 0x00d50e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00d50e70 + *(int *)(&DAT_00d50e70 + iVar5 * 4)))
              (&UNK_0035704c,0x3b,&UNK_0187779c);
    return;
  }
LAB_00d50ccc:
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar1,uVar8);
}

