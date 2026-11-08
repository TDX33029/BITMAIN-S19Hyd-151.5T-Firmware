// FUN_01a9d744 @ 01a9d744 size=540 calls_out=6 calls_in=7
// strings: recursion limit reached | invalid tag value: 0 | buffer underflow | unexpected end group tag

int FUN_01a9d744(undefined1 param_1,uint param_2,undefined4 *param_3,uint *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 **ppuVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *local_48;
  undefined4 *puStack_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  uint local_30 [2];
  uint *local_28;
  code *local_24;
  
  ppuVar4 = &local_48;
  if (param_4 == (uint *)0x0) {
    uVar6 = 0x17;
    pcVar3 = "recursion limit reached";
    puVar8 = param_3;
  }
  else {
    puVar8 = (undefined4 *)0x0;
    puVar2 = (undefined4 *)&DAT_00000008;
    puVar9 = puVar8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_1) {
    case 0:
      piVar10 = (int *)*param_3;
      FUN_01a9d538(&local_40,piVar10);
      if (local_40 != (undefined4 *)0x0) {
        return (int)local_3c;
      }
LAB_01a9d894:
      local_3c = (undefined4 *)piVar10[1];
      puVar2 = (undefined4 *)0x0;
      goto LAB_01a9d8c4;
    case 2:
      FUN_01a9d538(&local_40,*param_3);
      if (local_40 != (undefined4 *)0x0) {
        return (int)local_3c;
      }
      puVar2 = local_38;
      puVar9 = local_34;
      break;
    case 3:
      piVar10 = (int *)*param_3;
      iVar5 = (int)param_4 + -1;
      do {
        FUN_01a9d538(&local_40,piVar10);
        if (local_40 == (undefined4 *)0x1) {
          return (int)local_3c;
        }
        local_48 = local_38;
        puStack_44 = local_34;
        if (local_34 != (undefined4 *)0x0) {
          puVar7 = &DAT_00591421;
LAB_01a9d908:
          local_24 = FUN_012fd074;
          local_28 = (uint *)ppuVar4;
          FUN_01a8da38(&local_40,puVar7,&local_28);
          iVar5 = FUN_01aa428c(&local_40);
          return iVar5;
        }
        local_30[0] = (uint)local_38 & 7;
        local_30[1] = 0;
        param_4 = &switchD_01a9d804::switchdataD_01a9d808;
        uVar6 = 0;
        switch(local_30[0]) {
        case 0:
          break;
        case 1:
          uVar6 = 1;
          break;
        case 2:
          uVar6 = 2;
          break;
        case 3:
          uVar6 = 3;
          break;
        case 4:
          if ((uint)local_38 >> 3 == 0) goto LAB_01a9d928;
          puVar8 = local_38;
          if ((uint)local_38 >> 3 != param_2) goto switchD_01a9d770_caseD_4;
          goto LAB_01a9d894;
        case 5:
          uVar6 = 5;
          break;
        default:
          puVar7 = &DAT_00596158;
          ppuVar4 = (undefined4 **)local_30;
          goto LAB_01a9d908;
        }
        if ((uint)local_38 >> 3 == 0) {
LAB_01a9d928:
          iVar5 = FUN_01aa0da0("invalid tag value: 0",0x14);
          return iVar5;
        }
        iVar1 = FUN_01a9d744(uVar6,(uint)local_38 >> 3,param_3,iVar5);
        if (iVar1 != 0) {
          return iVar1;
        }
      } while( true );
    case 4:
switchD_01a9d770_caseD_4:
      uVar6 = 0x18;
      pcVar3 = "unexpected end group tag";
      goto LAB_01a9d968;
    case 5:
      puVar2 = (undefined4 *)&SUB_00000004;
    }
    piVar10 = (int *)*param_3;
    local_3c = (undefined4 *)piVar10[1];
    param_4 = (uint *)((int)local_3c - (int)puVar2);
    puVar8 = (undefined4 *)-((int)puVar9 + (uint)(puVar2 > local_3c));
    if ((uint)-(int)puVar9 < (uint)(puVar2 <= local_3c)) {
      if (local_3c < puVar2) {
        local_40 = puVar2;
                    /* WARNING: Subroutine does not return */
        FUN_01284540(&local_40);
      }
LAB_01a9d8c4:
      *piVar10 = (int)(*piVar10 + (int)puVar2);
      piVar10[1] = (int)local_3c - (int)puVar2;
      return 0;
    }
    uVar6 = 0x10;
    pcVar3 = "buffer underflow";
  }
LAB_01a9d968:
  iVar5 = FUN_01aa0da0(pcVar3,uVar6,puVar8,param_4);
  return iVar5;
}

