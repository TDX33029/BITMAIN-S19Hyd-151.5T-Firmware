// FUN_00ef7b80 @ 00ef7b80 size=648 calls_out=8 calls_in=16
// strings: recursion limit reached | invalid tag value: 0 | assertion failed: cnt <= self.lenAbsentUnhealthyNotEnoughSpacefree_bytesrequired_bytesPreparationApply | buffer underflow | unexpected end group tag

/* WARNING: Type propagation algorithm not settling */

int FUN_00ef7b80(undefined1 param_1,uint param_2,undefined4 ****param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uint ****ppppuVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 *****pppppuVar8;
  undefined4 **ppuVar9;
  undefined4 ****ppppuVar10;
  undefined4 *****pppppuVar11;
  undefined4 ***pppuVar12;
  undefined4 ****local_48;
  int iStack_44;
  undefined4 ****local_40;
  undefined4 local_3c;
  uint ****local_38;
  code *local_34;
  uint ****local_30;
  undefined1 *local_2c;
  undefined4 *****local_28;
  undefined1 *local_24;
  
  ppppuVar4 = (uint ****)&local_48;
  if (param_4 == 0) {
    uVar6 = 0x17;
    pcVar3 = "recursion limit reached";
    pppppuVar8 = (undefined4 *****)param_3;
  }
  else {
    puVar1 = (undefined1 *)0;
    pppppuVar8 = (undefined4 *****)&switchD_00ef7bac::switchdataD_00ef7bb0;
    pppppuVar11 = (undefined4 *****)&DAT_00000008;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_1) {
    case 0:
      pppuVar12 = *param_3;
      FUN_00ef78d0(&local_30,*pppuVar12);
      if (local_30 != (undefined4 ****)0x0) {
        return (int)local_2c;
      }
LAB_00ef7cd4:
      pppppuVar11 = (undefined4 *****)0x0;
      puVar2 = **pppuVar12;
      ppuVar9 = *pppuVar12 + 1;
      ppppuVar10 = (undefined4 ****)*ppuVar9;
      goto LAB_00ef7d28;
    case 2:
      FUN_00ef78d0(&local_30,**param_3);
      if (local_30 != (undefined4 ****)0x0) {
        return (int)local_2c;
      }
      puVar1 = local_24;
      pppppuVar11 = local_28;
      break;
    case 3:
      pppuVar12 = *param_3;
      do {
        FUN_00ef78d0(&local_30,*pppuVar12);
        if (local_30 == (undefined4 ****)0x1) {
          return (int)local_2c;
        }
        local_48 = local_28;
        iStack_44 = (int)local_24;
        if (local_24 != (undefined1 *)0x0) {
          puVar7 = &DAT_00591421;
LAB_00ef7d6c:
          local_34 = FUN_012fd074;
          local_38 = ppppuVar4;
          FUN_01a8da38(&local_30,puVar7,&local_38);
          iVar5 = FUN_01aa428c(&local_30);
          return iVar5;
        }
        local_40 = (undefined4 ****)((uint)local_28 & 7);
        local_3c = 0;
        uVar6 = 0;
        switch(local_40) {
        case (undefined4 ****)0x0:
          break;
        case (undefined4 ****)0x1:
          uVar6 = 1;
          break;
        case (undefined4 ****)0x2:
          uVar6 = 2;
          break;
        case (undefined4 ****)0x3:
          uVar6 = 3;
          break;
        case (undefined4 ****)0x4:
          if ((uint)local_28 >> 3 == 0) goto LAB_00ef7d8c;
          pppppuVar8 = local_28;
          if ((uint)local_28 >> 3 != param_2) goto switchD_00ef7bac_caseD_4;
          goto LAB_00ef7cd4;
        case (undefined4 ****)0x5:
          uVar6 = 5;
          break;
        default:
          puVar7 = &DAT_00596158;
          ppppuVar4 = (uint ****)&local_40;
          goto LAB_00ef7d6c;
        }
        if ((uint)local_28 >> 3 == 0) {
LAB_00ef7d8c:
          iVar5 = FUN_01aa0da0("invalid tag value: 0",0x14);
          return iVar5;
        }
        iVar5 = FUN_00ef7b80(uVar6,(uint)local_28 >> 3,param_3,param_4 + -1);
        if (iVar5 != 0) {
          return iVar5;
        }
      } while( true );
    case 4:
switchD_00ef7bac_caseD_4:
      uVar6 = 0x18;
      pcVar3 = "unexpected end group tag";
      goto LAB_00ef7e10;
    case 5:
      pppppuVar11 = (undefined4 *****)&SUB_00000004;
    }
    ppuVar9 = **param_3 + 1;
    ppppuVar10 = (undefined4 ****)*ppuVar9;
    pppppuVar8 = (undefined4 *****)((int)ppppuVar10 - (int)pppppuVar11);
    if ((uint)-(int)puVar1 < (uint)(pppppuVar11 <= ppppuVar10)) {
      if (ppppuVar10 < pppppuVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: cnt <= self.lenAbsentUnhealthyNotEnoughSpacefree_bytesrequired_bytesPreparationApply"
                     ,0x21,&DAT_01c18f74);
      }
      puVar2 = ***param_3;
      local_38 = (uint ****)puVar2[1];
      local_40 = pppppuVar11;
      if (local_38 < pppppuVar11) {
        local_28 = &local_38;
        local_30 = (uint ****)&local_40;
        local_24 = &LAB_01a6a304;
        local_2c = &LAB_01a6a304;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_005ac267,&local_30,&DAT_01d2bbe0);
      }
LAB_00ef7d28:
      FUN_01283ef4(puVar2,pppppuVar11);
      *ppuVar9 = (undefined4 *)((int)ppppuVar10 - (int)pppppuVar11);
      return 0;
    }
    uVar6 = 0x10;
    pcVar3 = "buffer underflow";
  }
LAB_00ef7e10:
  iVar5 = FUN_01aa0da0(pcVar3,uVar6,pppppuVar8);
  return iVar5;
}

