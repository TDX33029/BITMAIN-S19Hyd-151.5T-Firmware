// FUN_0170acbc @ 0170acbc size=508 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_0170acbc(int param_1,int param_2,uint param_3,undefined4 param_4,uint *param_5)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint uStack_138;
  uint uStack_134;
  uint auStack_130 [61];
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint local_30;
  uint local_2c [2];
  
  local_2c[0] = DAT_018ddaf8;
  if (param_3 < 8) {
    uVar5 = FUN_0178c650();
    return uVar5;
  }
  uVar3 = param_3 & 7;
  if (uVar3 < 6) {
    param_3 = param_3 & 0xfffffff8;
  }
  else {
    uVar3 = 0;
  }
  FUN_0178c500(auStack_130,param_4);
  FUN_01786840(param_1,param_2,param_3,auStack_130,param_5);
  FUN_0177aaa0(auStack_130,0xf4);
  if ((&local_30 <= param_5 || param_5 <= &local_3c) &&
     ((puVar4 = param_5 + 3, &local_3c <= param_5 || (puVar4 <= &local_3c)))) {
    local_3c = *param_5;
    uStack_38 = param_5[1];
    uStack_34 = param_5[2];
    if ((puVar4 <= &uStack_134 || auStack_130 <= puVar4) &&
       ((&uStack_134 <= puVar4 || (param_5 + 4 <= &uStack_134)))) {
      uVar2 = param_5[3];
      uVar2 = param_3 + (uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                        uVar2 >> 0x18);
      local_30 = uVar2 * 0x1000000 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                 uVar2 >> 0x18;
      if ((&uStack_138 <= &local_30 || local_2c <= &uStack_138) &&
         (&uStack_134 <= &local_30 || &local_30 <= &uStack_138)) {
        FUN_0178c650(param_1 + param_3 * 0x10,param_2 + param_3 * 0x10,uVar3,param_4,&local_3c);
        if (local_2c[0] != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
          FUN_016d2b78();
        }
        return 0;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x170ae70);
  (*pcVar1)();
}

