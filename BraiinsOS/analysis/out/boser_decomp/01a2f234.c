// FUN_01a2f234 @ 01a2f234 size=312 calls_out=4 calls_in=0
// strings: 

void FUN_01a2f234(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 local_64;
  undefined4 *local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  int local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 local_45;
  undefined1 auStack_44 [36];
  
  uVar5 = *param_2;
  pcVar4 = *(code **)(param_2[1] + 0xc);
  iVar3 = *param_1;
  iVar2 = (*pcVar4)(uVar5,1,0);
  uVar1 = 1;
  local_58 = iVar3 + 0x10;
  local_5b = 1;
  local_60 = param_2;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar4)(uVar5,"(",1);
      if (iVar2 == 0) {
        uVar5 = *param_2;
        iVar2 = param_2[1];
        FUN_01ae1bfc(auStack_44,iVar3);
        uVar1 = (**(code **)(iVar2 + 0xc))(uVar5,auStack_44,0x24);
      }
    }
    else {
      iVar2 = (*pcVar4)(uVar5,"(\n",2);
      uVar1 = 1;
      if (iVar2 == 0) {
        local_54 = *param_2;
        uStack_50 = param_2[1];
        puStack_4c = &local_45;
        local_45 = 1;
        FUN_01ae1bfc(auStack_44,iVar3);
        iVar2 = FUN_01302620(&local_54,auStack_44,0x24);
        if (iVar2 == 0) {
          uVar1 = FUN_01302620(&local_54,&DAT_005312e2,2);
        }
      }
    }
  }
  local_64 = 1;
  local_5c = uVar1;
  FUN_01302888(&local_64,&local_58,FUN_01a2c630);
  FUN_01302aa0();
  return;
}

