// FUN_014fa1b8 @ 014fa1b8 size=512 calls_out=4 calls_in=1
// strings: 

void FUN_014fa1b8(int *param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint local_38;
  uint local_34;
  byte local_30;
  int *local_2c;
  undefined4 local_28;
  
  do {
    local_28 = 0;
    local_2c = param_1;
    FUN_014f9adc(&local_38,&local_2c);
    uVar1 = local_34;
    if ((local_30 == 2) || ((local_30 & 1) != 0)) {
      return;
    }
    iVar7 = param_1[2];
    if (iVar7 == 0) {
      iVar3 = *param_1;
      uVar4 = param_1[1];
      if (local_34 < local_38) goto LAB_014fa374;
      if (local_38 != 0) {
        if (local_38 < uVar4) {
          if (*(char *)(iVar3 + local_38) < -0x40) goto LAB_014fa374;
        }
        else if (local_38 != uVar4) goto LAB_014fa374;
      }
      if (local_34 != 0) {
        if (local_34 < uVar4) {
          if (*(char *)(iVar3 + local_34) < -0x40) {
LAB_014fa374:
                    /* WARNING: Subroutine does not return */
            FUN_012fb514();
          }
        }
        else if (local_34 != uVar4) goto LAB_014fa374;
      }
LAB_014fa300:
      iVar3 = iVar3 + local_38;
      iVar5 = local_34 - local_38;
    }
    else {
      uVar4 = param_1[3];
      if (local_34 <= uVar4) {
        if (((local_34 < local_38) ||
            (((local_38 != 0 && (local_38 < uVar4)) && (*(char *)(iVar7 + local_38) < -0x40)))) ||
           (((iVar3 = iVar7, local_34 != 0 && (local_34 < uVar4)) &&
            (*(char *)(iVar7 + local_34) < -0x40)))) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(iVar7,uVar4,local_38,local_34,&DAT_01d2e45c);
        }
        goto LAB_014fa300;
      }
      uVar6 = local_34 - uVar4;
      uVar8 = local_38 - uVar4;
      iVar3 = *param_1;
      uVar9 = param_1[1];
      if (uVar6 < uVar8) goto LAB_014fa388;
      if (local_38 != uVar4) {
        if (uVar8 < uVar9) {
          if (*(char *)(iVar3 + uVar8) < -0x40) goto LAB_014fa388;
        }
        else if (uVar8 != uVar9) goto LAB_014fa388;
      }
      if (uVar6 < uVar9) {
        if (*(char *)(iVar3 + uVar6) < -0x40) {
LAB_014fa388:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(iVar3,uVar9,uVar8,uVar6,&DAT_01d2e44c);
        }
      }
      else if (uVar6 != uVar9) goto LAB_014fa388;
      iVar3 = iVar3 + uVar8;
      iVar5 = uVar6 - uVar8;
    }
    bVar2 = FUN_014f9ef0(iVar3,iVar5);
    if (1 < bVar2) {
      return;
    }
    uVar4 = param_1[1];
    if (iVar7 != 0) {
      uVar4 = uVar4 + param_1[3];
    }
    if (uVar1 + 1 < uVar4) {
      uVar4 = uVar1 + 1;
    }
    FUN_014fa08c(param_1,uVar4);
  } while( true );
}

