// FUN_00aad278 @ 00aad278 size=524 calls_out=3 calls_in=0
// strings: Atomic

undefined4 FUN_00aad278(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined1 *local_34;
  undefined1 local_2d;
  undefined1 auStack_2c [12];
  
  iVar5 = *param_1;
  iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"Atomic",6);
  puVar4 = (undefined4 *)(iVar5 + 8);
  piVar3 = (int *)(&DAT_018db800 + (((uint)puVar4 >> 0x14 ^ (uint)puVar4 >> 4) & 0x3f) * 0x40);
  do {
    if (*piVar3 == 0) {
      bVar1 = (bool)hasExclusiveAccess(piVar3);
      if (bVar1) {
        *piVar3 = 1;
        DataMemoryBarrier(0xb);
        local_48 = *puVar4;
        uStack_44 = *(undefined4 *)(iVar5 + 0xc);
        local_40 = *(undefined4 *)(iVar5 + 0x10);
        DataMemoryBarrier(0xb);
        *piVar3 = 0;
        if (iVar2 != 0) {
          return 1;
        }
        if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
          uVar7 = *param_2;
          iVar5 = param_2[1];
          pcVar6 = *(code **)(iVar5 + 0xc);
          iVar2 = (*pcVar6)(uVar7,"(",1);
          if (iVar2 != 0) {
            return 1;
          }
          FUN_00f6bd20(auStack_2c,&local_48,0);
          iVar2 = FUN_00f6beb0(auStack_2c,uVar7,iVar5);
          if (iVar2 != 0) {
            return 1;
          }
          iVar2 = (*pcVar6)(uVar7,&DAT_00414819,1);
        }
        else {
          uVar7 = *param_2;
          iVar5 = param_2[1];
          iVar2 = (**(code **)(iVar5 + 0xc))(uVar7,"(\n",2);
          if (iVar2 != 0) {
            return 1;
          }
          local_34 = &local_2d;
          local_2d = 1;
          local_3c = uVar7;
          local_38 = iVar5;
          FUN_00f6bd20(auStack_2c,&local_48,0);
          iVar2 = FUN_00f6beb0(auStack_2c,&local_3c,&DAT_01880dc4);
          if (iVar2 != 0) {
            return 1;
          }
          iVar2 = FUN_00fb1f64(&local_3c,&DAT_00414819,1);
          if (iVar2 != 0) {
            return 1;
          }
          iVar2 = FUN_00fb1f64(&local_3c,&DAT_00414a81,2);
        }
        if (iVar2 == 0) {
          uVar7 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
          return uVar7;
        }
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    while (*piVar3 != 0) {
      HintYield();
    }
  } while( true );
}

