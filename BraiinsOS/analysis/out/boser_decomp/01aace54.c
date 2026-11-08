// FUN_01aace54 @ 01aace54 size=424 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01aace54(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
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
  
  iVar3 = param_2[1];
  uVar9 = *param_2;
  pcVar10 = *(code **)(iVar3 + 0xc);
  local_54 = 1;
  uVar4 = (*pcVar10)(uVar9,"{",1);
  if (param_1[1] != 0) {
    iVar11 = param_1[1] << 3;
    uVar7 = param_2[2];
    uVar5 = param_2[3];
    puVar8 = (undefined4 *)(*param_1 + 4);
    bVar2 = false;
    do {
      uVar1 = uVar4 & 1;
      uVar4 = 1;
      if (uVar1 == 0) {
        if ((uVar7 & 0x800000) == 0) {
          if (bVar2) {
            iVar6 = (*pcVar10)(uVar9,&DAT_00533bc1,2);
            uVar4 = 1;
            if (iVar6 != 0) goto LAB_01aacfc4;
          }
          uVar4 = FUN_012fb940(param_2,puVar8[-1],*puVar8);
        }
        else if ((bVar2) || (iVar6 = (*pcVar10)(uVar9,"\n",1), iVar6 == 0)) {
          local_3c = &local_35;
          local_35 = 1;
          local_30 = &DAT_01ce45f8;
          local_44 = uVar9;
          local_40 = iVar3;
          local_34 = &local_44;
          local_2c = uVar7;
          local_28 = uVar5;
          iVar6 = FUN_012fb940(&local_34,puVar8[-1],*puVar8);
          if (iVar6 == 0) {
            uVar4 = FUN_01302620(&local_44,&DAT_005312e2,2);
          }
          else {
            uVar4 = 1;
          }
        }
      }
LAB_01aacfc4:
      puVar8 = puVar8 + 2;
      iVar11 = iVar11 + -8;
      bVar2 = true;
    } while (iVar11 != 0);
  }
  if (uVar4 == 0) {
    local_54 = (*pcVar10)(uVar9,"}",1);
  }
  return local_54;
}

