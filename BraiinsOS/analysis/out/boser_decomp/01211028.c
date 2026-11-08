// FUN_01211028 @ 01211028 size=616 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01211028(int param_1,uint *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  bVar1 = (uint)(uVar4 < 0xdceed2c0 || 0xdceed2c0 - uVar4 < (uint)(uVar3 < 0xc8b5eb6e)) <=
          0xb6c55ee9 - uVar5;
  if ((int)(-0x35cd3f00 - (uVar6 + (0xb6c55ee8 < uVar5 && bVar1))) < 0 ==
      (SBORROW4(-0x35cd3f00,uVar6) !=
      SBORROW4(-0x35cd3f00 - uVar6,(uint)(0xb6c55ee8 < uVar5 && bVar1)))) {
    if ((uVar3 == 0x22d08ba5 && uVar5 == 0xcd5682f5) && (uVar4 == 0xd863875b && uVar6 == 0xa41724e5)
       ) {
      return 1;
    }
    if ((uVar3 == 0x33714039 && uVar5 == 0x4a3a9c57) && (uVar4 == 0xa96d74a2 && uVar6 == 0xaf264115)
       ) {
      return 1;
    }
  }
  else {
    if ((uVar3 == 0xc8b5eb6e && uVar5 == 0xb6c55ee9) && (uVar4 == 0xdceed2c0 && uVar6 == 0xca32c100)
       ) {
      return 1;
    }
    if ((uVar3 == 0xb77bf416 && uVar5 == 0x3efbaaae) && (uVar4 == 0xe75f4353 && uVar6 == 0xebd2cd26)
       ) {
      return 1;
    }
    if ((uVar3 == 0x733d3137 && uVar5 == 0xc53fb069) && (uVar4 == 0xdd28e41 && uVar6 == 0x5da3bb8d))
    {
      return 1;
    }
  }
  if ((((uVar3 == 0xd2bc4916 && uVar5 == 0xf2f9e5da) && (uVar4 == 0xc95d4895 && uVar6 == 0x8290fead)
       ) || ((uVar3 == 0x1ffb37da && uVar5 == 0x23da4434) &&
             (uVar4 == 0xc1a448ba && uVar6 == 0x1ca0bbb1))) ||
     ((uVar3 == 0x1366134b && uVar5 == 0x685e68cd) && (uVar4 == 0x3789f2e9 && uVar6 == 0x984973b5)))
  {
    return 1;
  }
  uVar2 = FUN_01210d98(param_1 + 0x480);
  return uVar2;
}

