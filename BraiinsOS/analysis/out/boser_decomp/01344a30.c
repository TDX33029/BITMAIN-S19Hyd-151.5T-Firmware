// FUN_01344a30 @ 01344a30 size=184 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01344a30(int *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  
  uVar7 = param_1[1];
  uVar2 = 0;
  uVar4 = param_1[2];
  if (uVar4 < uVar7) {
    param_2 = *(byte *)(*param_1 + uVar4) - 0x30;
    if (param_2 < 10) {
      if (param_2 == 0) {
        param_1[2] = uVar4 + 1;
        uVar2 = 1;
        param_2 = 0;
      }
      else {
        iVar3 = 1;
        bVar6 = false;
        do {
          if (iVar3 == uVar7 - uVar4) {
            uVar2 = uVar7;
LAB_01344adc:
            param_1[2] = uVar2;
            uVar2 = 1;
            goto LAB_01344abc;
          }
          uVar5 = *(byte *)(*param_1 + iVar3 + uVar4) - 0x30;
          uVar2 = iVar3 + uVar4;
          if (9 < uVar5) goto LAB_01344adc;
          bVar1 = !bVar6;
          iVar3 = 2;
          bVar6 = true;
          param_2 = uVar5 + param_2 * 10;
        } while (bVar1);
        param_1[2] = uVar4 + 3;
        uVar2 = (uint)(param_2 < 0x100);
      }
    }
  }
LAB_01344abc:
  return CONCAT44(param_2,uVar2);
}

