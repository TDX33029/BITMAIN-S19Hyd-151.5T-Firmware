// FUN_00b7669c @ 00b7669c size=888 calls_out=11 calls_in=1
// strings: A Tokio 1.x context was found; but it is being shutdown.

void FUN_00b7669c(uint *param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined4 *local_54;
  undefined4 local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x2e)) {
  case 0:
    iVar4 = param_2[8];
    param_2[0xb] = *param_2;
    param_2[0xc] = param_2[1];
    param_2[0xd] = param_2[2];
    param_2[0xe] = param_2[3];
    param_2[0xf] = param_2[4];
    param_2[0x10] = param_2[5];
    param_2[0x11] = param_2[6];
    param_2[0x12] = param_2[7];
    uVar6 = 2;
    param_2[0x13] = iVar4;
    param_2[0x14] = iVar4;
    param_2[0x15] = param_2[9];
    param_2[0x16] = param_2[10];
    param_2[0x17] = param_2 + 0xb;
    param_2[0x18] = 2;
    *(undefined1 *)(param_2 + 0x1f) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c13310);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13310);
  case 3:
    puVar10 = param_2 + 0x13;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1f)) {
    case 0:
      iVar4 = param_2[0x13];
      uVar6 = param_2[0x18];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(0x1c242a4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(0x1c242a4);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x2d)) {
      case 0:
        iVar4 = param_2[0x20];
        uVar6 = param_2[0x21];
        goto LAB_00b768ac;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(0x1c242b4);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(0x1c242b4);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0x2c)) {
        case 0:
          iVar4 = param_2[0x22];
          uVar6 = param_2[0x23];
          goto LAB_00b768c4;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(0x1c242c4);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(0x1c242c4);
        case 3:
          goto switchD_00b767b4_caseD_3;
        }
      }
    case 4:
      goto switchD_00b7673c_caseD_4;
    }
  }
  puVar10 = param_2 + 0x13;
  param_2[0x19] = iVar4;
  param_2[0x1a] = uVar6;
  param_2[0x1b] = param_2[0x14];
  param_2[0x1c] = param_2[0x15];
  param_2[0x1d] = param_2[0x16];
  param_2[0x1e] = param_2[0x17];
  do {
    param_2[0x20] = iVar4;
    param_2[0x21] = uVar6;
    *(undefined1 *)(param_2 + 0x2d) = 0;
LAB_00b768ac:
    iVar4 = *(int *)(iVar4 + 8);
    *(undefined1 *)(param_2 + 0x2c) = 0;
    iVar4 = iVar4 + 0x20;
    param_2[0x22] = iVar4;
    param_2[0x23] = uVar6;
LAB_00b768c4:
    param_2[0x29] = uVar6;
    *(undefined1 *)(param_2 + 0x2b) = 0;
    *(undefined1 *)(param_2 + 0x2a) = 0;
    param_2[0x24] = iVar4;
    param_2[0x25] = 0;
    param_2[0x26] = 0;
    param_2[0x27] = 0;
switchD_00b767b4_caseD_3:
    puVar7 = param_2 + 0x2d;
    FUN_019e1354(&local_48,param_2 + 0x24,param_3);
    uVar5 = local_44;
    if (local_44._1_1_ == '\x02') {
      uVar3 = 3;
      *(undefined1 *)(param_2 + 0x2c) = 3;
      *(undefined1 *)puVar7 = 3;
LAB_00b76a4c:
      local_54 = param_2 + 0x1f;
      *(undefined1 *)local_54 = uVar3;
      goto LAB_00b76aa8;
    }
    FUN_0121d24c(param_2 + 0x24);
    *(undefined1 *)(param_2 + 0x2c) = 1;
    if ((uVar5 & 0x100) != 0) {
      FUN_019a18a8(&local_48,0x28,"A Tokio 1.x context was found, but it is being shutdown.",0x38);
      *(undefined1 *)puVar7 = 1;
      local_50 = local_48;
      local_4c = local_44;
      goto LAB_00b76a84;
    }
    *(undefined1 *)puVar7 = 1;
    param_2[0x20] = local_48;
    param_2[0x21] = local_44 & 0xffff00ff;
switchD_00b7673c_caseD_4:
    uVar5 = FUN_014a9348(param_3);
    if ((uVar5 & 1) != 0) {
      uVar3 = 4;
      goto LAB_00b76a4c;
    }
    uVar1 = (uVar5 & 0xffffff) >> 0x10;
    if (*(int *)(param_2[0x1b] + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d28f7c);
    }
    puVar9 = (uint *)param_2[0x1e];
    local_48 = *puVar9;
    local_44 = puVar9[1];
    uStack_40 = puVar9[2];
    uStack_3c = puVar9[3];
    local_38 = puVar9[4];
    uStack_34 = puVar9[5];
    uStack_30 = puVar9[6];
    uStack_2c = puVar9[7];
    FUN_01609da8(&local_50,*(int *)(param_2[0x1b] + 0xc),param_2[0x1c],param_2[0x1d],&local_48,
                 puVar10);
    uVar8 = local_50 & 0xff;
    if (uVar8 == 4) {
LAB_00b769d4:
      FUN_019edbc4(0,uVar1);
LAB_00b76a84:
      local_54 = param_2 + 0x1f;
      uVar3 = 1;
      *param_1 = local_50;
      *(undefined1 *)local_54 = 1;
      param_1[1] = local_4c;
      if ((local_50 & 0xff) == 5) {
LAB_00b76aa8:
        *(undefined1 *)param_1 = 5;
        uVar3 = 3;
      }
      *(undefined1 *)(param_2 + 0x2e) = uVar3;
      return;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar8) {
    case 0:
      if (local_4c == 0xb) goto LAB_00b769f8;
      goto LAB_00b769d4;
    case 1:
      cVar2 = local_50._1_1_;
      break;
    default:
      cVar2 = *(char *)(local_4c + 8);
    }
    if (cVar2 != '\r') goto LAB_00b769d4;
LAB_00b769f8:
    local_48 = param_2[0x20];
    local_44 = param_2[0x21];
    FUN_019e0788(*(int *)(param_2[0x19] + 8) + 0x20,&local_48);
    FUN_019edbc4((uVar5 & 0xffffff) >> 8,uVar1);
    FUN_0187266c(uVar8,local_4c);
    iVar4 = param_2[0x19];
    uVar6 = param_2[0x1a];
  } while( true );
}

