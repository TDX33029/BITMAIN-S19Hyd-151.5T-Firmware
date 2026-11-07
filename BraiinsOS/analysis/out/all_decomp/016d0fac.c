// FUN_016d0fac @ 016d0fac size=576 calls_out=3 calls_in=0
// strings: 

void FUN_016d0fac(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined4 local_30;
  undefined2 local_2c;
  undefined2 uStack_2a;
  undefined2 local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined2 auStack_22 [2];
  undefined1 uStack_1e;
  undefined4 uStack_1d;
  undefined1 uStack_19;
  undefined2 local_18;
  
  piVar2 = *(int **)*param_1;
  if (*piVar2 == 0) {
    uVar9 = piVar2[1];
    if (uVar9 == 10) {
      FUN_00faace8(param_2,&DAT_00419511,7);
      return;
    }
    if (uVar9 == 0x60) {
      FUN_00faace8(param_2,&DAT_00419518,3);
      return;
    }
    if ((uVar9 < 0x20) || (uVar9 == 0x7f)) {
      switch(uVar9) {
      case 0:
        local_30._0_2_ = 0x305c;
        break;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 0xb:
      case 0xc:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
switchD_016d109c_caseD_1:
        iVar5 = FUN_00fa9eec(uVar9);
        if (iVar5 == 0) {
          uStack_1d = 0x30303030;
          uVar1 = (&DAT_00563e90)[uVar9 & 0xf];
          uStack_19 = (&DAT_00563e90)[uVar9 >> 4];
          uStack_1e = 0;
          auStack_22[1] = 0;
          *(undefined1 *)((uint)(auStack_22 + 1) | (uint)LZCOUNT(uVar9 | 1) >> 2) = 0x7b;
          iVar5 = ((uint)LZCOUNT(uVar9 | 1) >> 2) - 2;
          local_18 = CONCAT11(0x7d,uVar1);
          *(undefined2 *)((int)(auStack_22 + 1) + iVar5) = 0x755c;
          local_30._0_2_ = auStack_22[1];
          local_30._2_2_ =
               (undefined2)
               (CONCAT13((undefined1)uStack_1d,CONCAT12(uStack_1e,auStack_22[1])) >> 0x10);
          local_2c = (undefined2)((uint)uStack_1d >> 8);
          uStack_2a = (undefined2)(CONCAT13(uStack_19,uStack_1d._1_3_) >> 0x10);
          local_23 = 10;
          local_28 = local_18;
        }
        else {
          local_23 = 0x81;
          iVar5 = 0x80;
          local_30._0_2_ = (undefined2)uVar9;
          local_30._2_2_ = (undefined2)(uVar9 >> 0x10);
        }
        local_24 = (undefined1)iVar5;
        goto LAB_016d11cc;
      case 9:
        local_30._0_2_ = 0x745c;
        break;
      case 10:
        local_30._0_2_ = 0x6e5c;
        break;
      case 0xd:
        local_30._0_2_ = 0x725c;
        break;
      case 0x22:
        local_30._0_2_ = 0x225c;
        break;
      case 0x27:
        local_30._0_2_ = 0x275c;
        break;
      default:
        if (uVar9 != 0x5c) goto switchD_016d109c_caseD_1;
        local_30._0_2_ = 0x5c5c;
      }
      local_24 = 0;
      uStack_2a = 0;
      local_28 = 0;
      local_30._2_2_ = 0;
      local_2c = 0;
      local_23 = 2;
LAB_016d11cc:
      uStack_19 = 1;
      auStack_22[1] = SUB42(&local_30,0);
      uStack_1e = (undefined1)((uint)&local_30 >> 0x10);
      uStack_1d._0_1_ = (undefined1)((uint)&local_30 >> 0x18);
      uStack_1d = CONCAT31(0x3f8a84,(undefined1)uStack_1d);
      FUN_00fa948c(*param_2,param_2[1],&DAT_00574fbe,auStack_22 + 1);
      return;
    }
    puVar8 = &UNK_016d13f8;
  }
  else {
    piVar3 = piVar2 + 1;
    puVar8 = &LAB_008b9b38;
    if (*piVar2 != 1) {
      auStack_22[1] = SUB42(piVar3,0);
      uStack_1e = (undefined1)((uint)piVar3 >> 0x10);
      uStack_1d._0_1_ = (undefined1)((uint)piVar3 >> 0x18);
      uVar4 = *param_2;
      uVar6 = param_2[1];
      puVar7 = &DAT_00590e71;
      goto LAB_016d1034;
    }
  }
  piVar2 = piVar2 + 1;
  auStack_22[1] = SUB42(piVar2,0);
  uStack_1e = (undefined1)((uint)piVar2 >> 0x10);
  uStack_1d._0_1_ = (undefined1)((uint)piVar2 >> 0x18);
  uVar4 = *param_2;
  uVar6 = param_2[1];
  puVar7 = &DAT_00574fbe;
LAB_016d1034:
  local_2c = SUB42(puVar8,0);
  uStack_2a = (undefined2)((uint)puVar8 >> 0x10);
  local_30 = auStack_22 + 1;
  FUN_00fa948c(uVar4,uVar6,puVar7,&local_30);
  return;
}

