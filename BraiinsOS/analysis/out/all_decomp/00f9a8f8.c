// FUN_00f9a8f8 @ 00f9a8f8 size=504 calls_out=2 calls_in=0
// strings: inner | inner

undefined4 FUN_00f9a8f8(int param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined4 *local_48;
  code *local_44;
  undefined1 *local_40;
  undefined1 local_39;
  undefined4 *local_38;
  code *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  puVar5 = (undefined4 *)*param_2;
  pcVar6 = (code *)param_2[1];
  pcVar4 = *(code **)(pcVar6 + 0xc);
  iVar1 = (*pcVar4)(puVar5,&DAT_00569948,8);
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar4)(puVar5,&DAT_00414a79,3);
      if (((iVar1 == 0) && (iVar1 = (*pcVar4)(puVar5,"inner",5), iVar1 == 0)) &&
         (iVar1 = (*pcVar4)(puVar5,&DAT_00414a7c,2), iVar1 == 0)) {
        local_30 = *(undefined4 *)(param_1 + 8);
        uStack_2c = *(undefined4 *)(param_1 + 0xc);
        uStack_28 = *(undefined4 *)(param_1 + 0x10);
        local_24 = *(undefined4 *)(param_1 + 0x14);
        local_48 = &local_30;
        local_44 = FUN_00facefc;
        iVar1 = FUN_00fa948c(puVar5,pcVar6,&DAT_00369a4e,&local_48);
        if (iVar1 == 0) {
          uVar3 = 2;
          pcVar2 = " }";
LAB_00f9aadc:
          uVar3 = (*pcVar4)(puVar5,pcVar2,uVar3);
          return uVar3;
        }
      }
    }
    else {
      iVar1 = (*pcVar4)(puVar5,&DAT_00414a7e,3);
      if (iVar1 == 0) {
        local_40 = &local_39;
        local_39 = 1;
        local_48 = puVar5;
        local_44 = pcVar6;
        iVar1 = FUN_00fb1f64(&local_48,"inner",5);
        if ((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_48,&DAT_00414a7c,2), iVar1 == 0)) {
          local_24 = *(undefined4 *)(param_1 + 0x14);
          local_30 = *(undefined4 *)(param_1 + 8);
          uStack_2c = *(undefined4 *)(param_1 + 0xc);
          uStack_28 = *(undefined4 *)(param_1 + 0x10);
          local_38 = &local_30;
          local_34 = FUN_00facefc;
          iVar1 = FUN_00fa948c(&local_48,&DAT_01880dc4,&DAT_00369a4e,&local_38);
          if ((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_48,&DAT_00414a81,2), iVar1 == 0)) {
            uVar3 = 1;
            pcVar2 = "}";
            goto LAB_00f9aadc;
          }
        }
      }
    }
  }
  return 1;
}

