// FUN_015e62c0 @ 015e62c0 size=404 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_015e62c0(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  code *pcVar10;
  int iVar11;
  undefined4 local_54;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  uint local_2c;
  undefined4 local_28;
  
  uVar8 = *param_2;
  iVar5 = param_2[1];
  iVar7 = *(int *)(*param_1 + 4);
  iVar11 = *(int *)(*param_1 + 8);
  pcVar10 = *(code **)(iVar5 + 0xc);
  local_54 = 1;
  uVar3 = (*pcVar10)(uVar8,&DAT_0053340d,1);
  if (iVar11 != 0) {
    uVar9 = param_2[2];
    iVar11 = iVar11 * 0x11;
    uVar6 = param_2[3];
    bVar2 = false;
    do {
      uVar1 = uVar3 & 1;
      uVar3 = 1;
      if (uVar1 == 0) {
        if ((uVar9 & 0x800000) == 0) {
          if (bVar2) {
            iVar4 = (*pcVar10)(uVar8,&DAT_00533bc1,2);
            uVar3 = 1;
            if (iVar4 != 0) goto LAB_015e641c;
          }
          uVar3 = FUN_01308e14(iVar7,param_2);
        }
        else if ((bVar2) || (iVar4 = (*pcVar10)(uVar8,"\n",1), iVar4 == 0)) {
          local_35 = 1;
          local_3c = &local_35;
          local_30 = &DAT_01ce45f8;
          local_44 = uVar8;
          local_40 = iVar5;
          local_34 = &local_44;
          local_2c = uVar9;
          local_28 = uVar6;
          iVar4 = FUN_01308e14(iVar7,&local_34);
          if (iVar4 == 0) {
            uVar3 = FUN_01302620(&local_44,&DAT_005312e2,2);
          }
          else {
            uVar3 = 1;
          }
        }
      }
LAB_015e641c:
      iVar7 = iVar7 + 0x11;
      iVar11 = iVar11 + -0x11;
      bVar2 = true;
    } while (iVar11 != 0);
  }
  if (uVar3 == 0) {
    local_54 = (*pcVar10)(uVar8,"]",1);
  }
  return local_54;
}

