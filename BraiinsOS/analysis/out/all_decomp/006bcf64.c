// FUN_006bcf64 @ 006bcf64 size=460 calls_out=1 calls_in=0
// strings: TrySendError

undefined4 FUN_006bcf64(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_30;
  int iStack_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  uVar6 = *param_2;
  iVar7 = param_2[1];
  pcVar5 = *(code **)(iVar7 + 0xc);
  iVar1 = (*pcVar5)(uVar6,"TrySendError",0xc);
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar5)(uVar6,&DAT_00414a79,3);
      if (((iVar1 == 0) && (iVar1 = (*pcVar5)(uVar6,&DAT_005691b4,4), iVar1 == 0)) &&
         (iVar1 = (*pcVar5)(uVar6,&DAT_00414a7c,2), iVar1 == 0)) {
        puVar2 = &DAT_00566e54;
        uVar4 = 4;
        if (*(char *)(param_1 + 0x74) != '\0') {
          uVar4 = 0xc;
          puVar2 = &DAT_00408924;
        }
        iVar1 = (*pcVar5)(uVar6,puVar2,uVar4);
        if (iVar1 == 0) {
          uVar4 = 2;
          pcVar3 = " }";
LAB_006bd11c:
          uVar6 = (*pcVar5)(uVar6,pcVar3,uVar4);
          return uVar6;
        }
      }
    }
    else {
      iVar1 = (*pcVar5)(uVar6,&DAT_00414a7e,3);
      if (iVar1 == 0) {
        local_28 = &local_21;
        local_21 = 1;
        local_30 = uVar6;
        iStack_2c = iVar7;
        iVar1 = FUN_00fb1f64(&local_30,&DAT_005691b4,4);
        if ((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), iVar1 == 0)) {
          puVar2 = &DAT_00566e54;
          uVar4 = 4;
          if (*(char *)(param_1 + 0x74) != '\0') {
            uVar4 = 0xc;
            puVar2 = &DAT_00408924;
          }
          iVar1 = FUN_00fb1f64(&local_30,puVar2,uVar4);
          if ((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_30,&DAT_00414a81,2), iVar1 == 0)) {
            uVar4 = 1;
            pcVar3 = "}";
            goto LAB_006bd11c;
          }
        }
      }
    }
  }
  return 1;
}

