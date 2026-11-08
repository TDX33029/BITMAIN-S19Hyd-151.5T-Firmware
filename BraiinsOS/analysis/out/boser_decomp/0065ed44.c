// FUN_0065ed44 @ 0065ed44 size=348 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_0065ed44(int param_1,undefined4 *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined1 *local_2c;
  undefined1 local_25;
  
  uVar4 = *param_2;
  iVar6 = param_2[1];
  iVar7 = *(int *)(param_1 + 4);
  iVar9 = *(int *)(param_1 + 8);
  pcVar8 = *(code **)(iVar6 + 0xc);
  local_38 = 1;
  uVar3 = (*pcVar8)(uVar4,&DAT_0053340d,1);
  if (iVar9 != 0) {
    uVar5 = param_2[2];
    puVar10 = (undefined4 *)(iVar7 + 4);
    iVar9 = iVar9 * 0xc;
    bVar2 = false;
    do {
      uVar1 = uVar3 & 1;
      uVar3 = 1;
      if (uVar1 == 0) {
        if ((uVar5 & 0x800000) == 0) {
          if (bVar2) {
            iVar7 = (*pcVar8)(uVar4,&DAT_00533bc1,2);
            uVar3 = 1;
            if (iVar7 != 0) goto LAB_0065ee6c;
          }
          uVar3 = FUN_012fb170(*puVar10,puVar10[1],uVar4,iVar6);
        }
        else if ((bVar2) || (iVar7 = (*pcVar8)(uVar4,"\n",1), iVar7 == 0)) {
          local_2c = &local_25;
          local_25 = 1;
          uStack_34 = uVar4;
          iStack_30 = iVar6;
          iVar7 = FUN_012fb170(*puVar10,puVar10[1],&uStack_34,&DAT_01ce45f8);
          if (iVar7 == 0) {
            uVar3 = FUN_01302620(&uStack_34,&DAT_005312e2,2);
          }
          else {
            uVar3 = 1;
          }
        }
      }
LAB_0065ee6c:
      puVar10 = puVar10 + 3;
      iVar9 = iVar9 + -0xc;
      bVar2 = true;
    } while (iVar9 != 0);
  }
  if (uVar3 == 0) {
    local_38 = (*pcVar8)(uVar4,"]",1);
  }
  return local_38;
}

