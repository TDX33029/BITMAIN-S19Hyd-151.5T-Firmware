// FUN_009eb0d4 @ 009eb0d4 size=560 calls_out=0 calls_in=1
// strings: 

longlong FUN_009eb0d4(uint param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *param_2;
  uVar5 = param_2[1];
  uVar4 = param_2[2];
  uVar2 = param_2[3];
  bVar1 = (uint)(uVar5 < 0x29ba058a || 0x29ba058a - uVar5 < (uint)(uVar3 < 0x1a4d5290)) <=
          0x1342097a - uVar4;
  if ((int)(0xbfa8969 - (uVar2 + (0x13420979 < uVar4 && bVar1))) < 0 ==
      (SBORROW4(0xbfa8969,uVar2) != SBORROW4(0xbfa8969 - uVar2,(uint)(0x13420979 < uVar4 && bVar1)))
     ) {
    if (((uVar3 == 0xfe684a00 && uVar4 == 0xe8f7d56d) &&
         (uVar5 == 0xb8753803 && uVar2 == 0xc7caec10)) ||
       ((uVar3 == 0xe9fee33a && uVar4 == 0x8853d883) && (uVar5 == 0xc43c909e && uVar2 == 0xd8b33271)
       )) {
      return CONCAT44(param_1,1);
    }
  }
  else {
    if ((uVar3 == 0x1032b866 && uVar4 == 0x893dff34) && (uVar5 == 0x40b7bcd2 && uVar2 == 0x4fae36de)
       ) {
      return CONCAT44(param_1 + 0x118,1);
    }
    if ((uVar3 == 0x1a4d5290 && uVar4 == 0x1342097a) && (uVar5 == 0x29ba058a && uVar2 == 0xbfa8969))
    goto LAB_009eb2dc;
  }
  if ((uVar3 == 0x627a6f59 && uVar4 == 0x45b948fa) && (uVar5 == 0x3dc30ebf && uVar2 == 0x97904b8d))
  {
    return CONCAT44(param_1 + 0x13c,1);
  }
  if ((uVar3 != 0x37bddcb1 || uVar4 != 0x6115bd6a) || (uVar5 != 0x3deb52c6 || uVar2 != 0xfd8b3b08))
  {
    if ((uVar3 == 0x75f59a95 && uVar4 == 0xdd67e69) && (uVar5 == 0xd50ce1a5 && uVar2 == 0xc10724cd))
    {
      return CONCAT44(param_1 + 0x130,1);
    }
    return (ulonglong)param_1 << 0x20;
  }
LAB_009eb2dc:
  return CONCAT44(param_1 + 0x120,1);
}

