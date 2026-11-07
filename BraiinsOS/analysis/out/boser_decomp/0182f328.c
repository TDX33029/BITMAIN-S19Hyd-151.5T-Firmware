// FUN_0182f328 @ 0182f328 size=256 calls_out=5 calls_in=3
// strings: 

void FUN_0182f328(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
                 undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  uint local_70;
  uint local_6c;
  int local_68;
  
  FUN_019ac130(&local_70,1);
  uVar5 = local_70 + param_3;
  uVar1 = local_6c + param_4 + (uint)CARRY4(local_70,param_3);
  if ((int)param_4 < 0 == (int)((local_6c ^ uVar1) & ~(local_6c ^ param_4)) < 0) {
    puVar4 = (undefined1 *)(local_68 + param_5);
    if (&DAT_3b9aca00 <= puVar4) {
      bVar6 = 0xfffffffe < uVar5;
      uVar5 = uVar5 + 1;
      uVar3 = uVar1 + bVar6;
      if ((int)((uVar1 ^ uVar3) & ~uVar1) < 0) goto LAB_0182f3b4;
      puVar4 = puVar4 + -1000000000;
      uVar1 = uVar3;
    }
    uVar7 = FUN_019ef7f4(param_7);
    uVar2 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_019dc4f8(&local_70,(int)uVar7,uVar2,uVar2,uVar5,uVar1,puVar4,param_7);
  }
  else {
LAB_0182f3b4:
    FUN_019e6e14(&local_70);
  }
  FUN_01bed4e2(param_1 + 0x50,param_6,0x48);
  FUN_01bed4e2(param_1,&local_70,0x50);
  return;
}

