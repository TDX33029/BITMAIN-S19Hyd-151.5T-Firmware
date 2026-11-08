// FUN_01585110 @ 01585110 size=416 calls_out=9 calls_in=2
// strings: Operation timed out

void FUN_01585110(uint *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint local_2c;
  
  uVar5 = *param_2;
  uVar6 = param_2[2];
  uVar7 = param_2[4];
  puVar1 = (uint *)thunk_FUN_016d4a50(8);
  if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar1 = uVar7;
  puVar1[1] = 4;
  local_30 = uVar5;
  local_2c = uVar6;
  iVar2 = FUN_016e046a(puVar1,1,&local_30,0);
  if (iVar2 < 0) {
    piVar3 = (int *)FUN_016d2bc8();
    iVar2 = *piVar3;
    FUN_01584c70(&local_30,iVar2);
    uVar4 = 0x28;
    if (iVar2 == 4) {
      uVar4 = 0x23;
    }
    FUN_015801e4(&local_38,uVar4,&local_30);
LAB_015851d4:
    uVar5 = local_38;
    uVar6 = uStack_34;
  }
  else {
    if (iVar2 != 0) {
      if ((*(ushort *)((int)puVar1 + 6) & 4) != 0) {
        thunk_FUN_016d3fb4(puVar1);
        goto LAB_0158523c;
      }
      if ((*(ushort *)((int)puVar1 + 6) & 0x30) == 0) {
        FUN_01584c70(&local_30,5);
        FUN_015801e4(&local_38,0x28,&local_30);
      }
      else {
        FUN_01584c70(&local_30,0x20);
        FUN_015801e4(&local_38,0xb,&local_30);
      }
      goto LAB_015851d4;
    }
    FUN_015e79d4(&local_30,0x16,"Operation timed out",0x13);
    uVar5 = local_30;
    uVar6 = local_2c;
  }
  thunk_FUN_016d3fb4(puVar1);
  if ((uVar5 & 0xff) != 4) {
    *param_1 = uVar5;
    param_1[1] = uVar6;
    return;
  }
LAB_0158523c:
  uVar5 = FUN_016e034e(uVar7,param_3,param_4);
  if ((int)uVar5 < 0) {
    puVar1 = (uint *)FUN_016d2bc8();
    uVar5 = *puVar1;
    *(undefined1 *)param_1 = 0;
    param_1[1] = uVar5;
    return;
  }
  *(undefined1 *)param_1 = 4;
  param_1[1] = uVar5;
  return;
}

