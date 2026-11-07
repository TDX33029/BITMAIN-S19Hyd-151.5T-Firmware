// FUN_01aefce4 @ 01aefce4 size=348 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01aefce4(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined1 *local_2c;
  undefined1 local_25;
  
  uVar5 = *param_3;
  iVar8 = param_3[1];
  pcVar7 = *(code **)(iVar8 + 0xc);
  local_38 = 1;
  uVar3 = (*pcVar7)(uVar5,&DAT_0053340d,1);
  if (param_2 != 0) {
    uVar6 = param_3[2];
    puVar9 = (undefined4 *)(param_1 + 4);
    param_2 = param_2 * 0xc;
    bVar2 = false;
    do {
      uVar1 = uVar3 & 1;
      uVar3 = 1;
      if (uVar1 == 0) {
        if ((uVar6 & 0x800000) == 0) {
          if (bVar2) {
            iVar4 = (*pcVar7)(uVar5,&DAT_00533bc1,2);
            uVar3 = 1;
            if (iVar4 != 0) goto LAB_01aefe0c;
          }
          uVar3 = FUN_012fb170(*puVar9,puVar9[1],uVar5,iVar8);
        }
        else if ((bVar2) || (iVar4 = (*pcVar7)(uVar5,"\n",1), iVar4 == 0)) {
          local_2c = &local_25;
          local_25 = 1;
          uStack_34 = uVar5;
          iStack_30 = iVar8;
          iVar4 = FUN_012fb170(*puVar9,puVar9[1],&uStack_34,&DAT_01ce45f8);
          if (iVar4 == 0) {
            uVar3 = FUN_01302620(&uStack_34,&DAT_005312e2,2);
          }
          else {
            uVar3 = 1;
          }
        }
      }
LAB_01aefe0c:
      puVar9 = puVar9 + 3;
      param_2 = param_2 + -0xc;
      bVar2 = true;
    } while (param_2 != 0);
  }
  if (uVar3 == 0) {
    local_38 = (*pcVar7)(uVar5,"]",1);
  }
  return local_38;
}

