// FUN_018e9418 @ 018e9418 size=404 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_018e9418(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  code *pcVar12;
  undefined4 local_3c;
  undefined4 local_34;
  int local_30;
  undefined1 *local_2c;
  undefined1 local_25;
  
  uVar10 = *param_2;
  iVar5 = param_2[1];
  pcVar8 = (char *)*param_1;
  iVar9 = param_1[1];
  pcVar12 = *(code **)(iVar5 + 0xc);
  local_3c = 1;
  uVar3 = (*pcVar12)(uVar10,&DAT_0053340d,1);
  if (iVar9 != 0) {
    uVar11 = param_2[2];
    bVar2 = false;
    do {
      uVar1 = uVar3 & 1;
      uVar3 = 1;
      if (uVar1 == 0) {
        if ((uVar11 & 0x800000) == 0) {
          if (bVar2) {
            iVar4 = (*pcVar12)(uVar10,&DAT_00533bc1,2);
            uVar3 = 1;
            if (iVar4 != 0) goto LAB_018e9574;
          }
          uVar7 = 3;
          puVar6 = &DAT_00520f36;
          if (*pcVar8 != '\0') {
            uVar7 = 5;
            puVar6 = &DAT_00520f39;
          }
          uVar3 = (*pcVar12)(uVar10,puVar6,uVar7);
        }
        else if ((bVar2) || (iVar4 = (*pcVar12)(uVar10,"\n",1), iVar4 == 0)) {
          local_2c = &local_25;
          local_25 = 1;
          uVar7 = 3;
          if (*pcVar8 != '\0') {
            uVar7 = 5;
          }
          puVar6 = &DAT_00520f36;
          if (*pcVar8 != '\0') {
            puVar6 = &DAT_00520f39;
          }
          local_34 = uVar10;
          local_30 = iVar5;
          iVar4 = FUN_01302620(&local_34,puVar6,uVar7);
          if (iVar4 == 0) {
            uVar3 = FUN_01302620(&local_34,&DAT_005312e2,2);
          }
          else {
            uVar3 = 1;
          }
        }
      }
LAB_018e9574:
      pcVar8 = pcVar8 + 1;
      iVar9 = iVar9 + -1;
      bVar2 = true;
    } while (iVar9 != 0);
  }
  if (uVar3 == 0) {
    local_3c = (*pcVar12)(uVar10,"]",1);
  }
  return local_3c;
}

