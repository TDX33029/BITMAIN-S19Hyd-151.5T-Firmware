// FUN_01210d98 @ 01210d98 size=656 calls_out=0 calls_in=4
// strings: 

undefined8
FUN_01210d98(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  bVar1 = (uint)(param_4 < 0xdceed2c0 || 0xdceed2c0 - param_4 < (uint)(param_3 < 0xc8b5eb6e)) <=
          0xb6c55ee9 - param_5;
  if ((int)(-0x35cd3f00 - (param_6 + (uint)(0xb6c55ee8 < param_5 && bVar1))) < 0 ==
      (SBORROW4(-0x35cd3f00,param_6) !=
      SBORROW4(-0x35cd3f00 - param_6,(uint)(0xb6c55ee8 < param_5 && bVar1)))) {
    if ((param_3 == 0x248f4295 && param_5 == 0x518ff394) &&
        (param_4 == 0x68c5a3d && param_6 == -0x4f81cf2c)) goto LAB_01210f8c;
    uVar2 = param_3 ^ 0xf6a1c358 | param_5 ^ 0x72f8f93a;
    uVar3 = param_4 ^ 0x2d09ec1f;
    iVar4 = -0x3fbff95f;
LAB_01210eec:
    if (uVar2 == 0 && (uVar3 == 0 && param_6 == iVar4)) {
LAB_01210efc:
      return CONCAT44(param_1,1);
    }
    if ((param_3 == 0xd2bc4916 && param_5 == 0xf2f9e5da) &&
        (param_4 == 0xc95d4895 && param_6 == -0x7d6f0153)) {
LAB_01210f8c:
      return CONCAT44(param_1 + 0x410,1);
    }
    if ((param_3 != 0x1ffb37da || param_5 != 0x23da4434) ||
        (param_4 != 0xc1a448ba || param_6 != 0x1ca0bbb1)) {
      if ((param_3 != 0x1366134b || param_5 != 0x685e68cd) ||
          (param_4 != 0x3789f2e9 || param_6 != -0x67b68c4b)) {
        return CONCAT44(param_1 + 0x480,
                        (uint)((param_3 == 0xf90928fa && param_5 == 0x4b2225da) &&
                              (param_4 == 0xb20c346f && param_6 == -0x4b58efd6)));
      }
      iVar4 = 0x418;
      goto LAB_01210f84;
    }
  }
  else if ((param_3 != 0xc8b5eb6e || param_5 != 0xb6c55ee9) ||
           (param_4 != 0xdceed2c0 || param_6 != -0x35cd3f00)) {
    if ((param_3 == 0xe9fcba1b && param_5 == 0x3772124c) &&
        (param_4 == 0x39d7d2da && param_6 == 0x337814b8)) goto LAB_01210efc;
    uVar2 = param_3 ^ 0xdf78a5b6 | param_5 ^ 0x70ccd127;
    uVar3 = param_4 ^ 0xe822c052;
    iVar4 = 0x3fa6e976;
    goto LAB_01210eec;
  }
  iVar4 = 0x478;
LAB_01210f84:
  return CONCAT44(param_1 + iVar4,1);
}

