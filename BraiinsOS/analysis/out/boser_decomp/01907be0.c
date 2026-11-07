// FUN_01907be0 @ 01907be0 size=712 calls_out=16 calls_in=0
// strings: 

void FUN_01907be0(undefined2 *param_1,int *param_2,undefined2 param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  if (*param_2 == 0) goto LAB_01907de0;
  if (*param_2 == 1) {
    iVar4 = param_2[3];
    iVar7 = param_2[2];
    FUN_00703bcc(&local_34,iVar7,iVar4,0x198);
    puVar6 = (undefined4 *)*param_4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)*puVar6) {
    case 0:
      iVar2 = FUN_01b3ccb8();
      break;
    case 1:
      iVar2 = FUN_01b3cd04();
      break;
    case 2:
      iVar2 = FUN_01b3cd50();
      break;
    case 3:
      iVar2 = FUN_01b3cd9c();
    }
    if (iVar2 == 0) {
      if (local_34 != 0) goto LAB_01907de0;
      iVar4 = local_30;
    }
    else {
      FUN_01afd61c(&local_58,iVar7,iVar4);
      local_2c = local_58;
      local_28 = local_54;
      iVar7 = FUN_01b04778(&local_2c,iVar2);
      if (iVar7 == 0) {
        bVar1 = false;
        iVar4 = 0xf;
      }
      else {
        iVar4 = FUN_01b46f98();
        bVar1 = false;
        if (iVar4 == 0) {
LAB_01907d68:
          iVar4 = 0xf;
        }
        else {
          iVar2 = FUN_01b47ab4(iVar4,iVar7);
          if (iVar2 != 1) {
            FUN_01b46fd8(iVar4);
            goto LAB_01907d68;
          }
          bVar1 = true;
        }
        FUN_01b3d538(iVar7);
      }
      if (local_34 == 0) {
        if (bVar1) {
          FUN_01b46fd8(iVar4);
        }
        iVar4 = local_30;
      }
      else if (!bVar1) goto LAB_01907de0;
    }
    uVar5 = *(undefined4 *)(&DAT_00568918 + (uint)*(byte *)*puVar6 * 4);
    iVar7 = FUN_01b47ba8(iVar4);
    if ((iVar7 != 0) && (iVar7 = FUN_00705238(iVar7,uVar5), iVar7 == 0)) {
      FUN_00703fd4(&local_58,param_4,iVar4);
      if (local_58 != 0) {
        iVar4 = local_58;
        iVar7 = local_54;
LAB_01907e44:
        iStack_3c = local_44;
        iStack_40 = local_48;
        local_48 = local_50;
        local_54 = 1;
        local_58 = 1;
        local_44 = local_4c;
        local_50 = iVar4;
        local_4c = iVar7;
        piVar3 = (int *)thunk_FUN_01be5118(0x20);
        if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x20);
        }
        *piVar3 = local_58;
        piVar3[1] = local_54;
        piVar3[2] = local_50;
        piVar3[3] = local_4c;
        piVar3[4] = local_48;
        piVar3[5] = local_44;
        piVar3[6] = iStack_40;
        piVar3[7] = iStack_3c;
        *(int **)(param_1 + 2) = piVar3;
        *param_1 = param_3;
        return;
      }
      goto LAB_01907de0;
    }
  }
  else {
    FUN_00703bcc(&local_58,param_2[2],param_2[3],0x198);
    iVar4 = local_54;
    if (local_58 != 0) goto LAB_01907de0;
    uVar5 = *(undefined4 *)(&DAT_00568918 + (uint)**(byte **)*param_4 * 4);
    iVar7 = FUN_01b47ba8(local_54);
    if ((iVar7 != 0) && (iVar7 = FUN_00705238(iVar7,uVar5), iVar7 == 0)) {
      FUN_00703fd4(&local_58,param_4,iVar4);
      if (local_58 == 0) goto LAB_01907de0;
      iVar4 = local_58;
      iVar7 = local_54;
      goto LAB_01907e44;
    }
  }
  FUN_01b46fd8(iVar4);
LAB_01907de0:
  *param_1 = 0xe;
  return;
}

