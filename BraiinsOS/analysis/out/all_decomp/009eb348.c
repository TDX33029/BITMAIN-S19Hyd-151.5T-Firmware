// FUN_009eb348 @ 009eb348 size=564 calls_out=0 calls_in=1
// strings: 

longlong FUN_009eb348(uint param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = *param_2;
  uVar6 = param_2[1];
  uVar3 = param_2[2];
  uVar2 = param_2[3];
  bVar1 = (uint)(uVar6 < 0xc0e4d88f || 0xc0e4d88f - uVar6 < (uint)(uVar4 < 0x58e42954)) <=
          0xcc5966d7 - uVar3;
  if ((int)(-0x11f95aad - (uVar2 + (0xcc5966d6 < uVar3 && bVar1))) < 0 ==
      (SBORROW4(-0x11f95aad,uVar2) !=
      SBORROW4(-0x11f95aad - uVar2,(uint)(0xcc5966d6 < uVar3 && bVar1)))) {
    if (((uVar4 == 0x6f5e80bb && uVar3 == 0xec881e99) && (uVar6 == 0x8bca298 && uVar2 == 0x8c30dcd8)
        ) || ((uVar4 == 0x627a6f59 && uVar3 == 0x45b948fa) &&
              (uVar6 == 0x3dc30ebf && uVar2 == 0x97904b8d))) {
      return CONCAT44(param_1 + 0x18,1);
    }
    uVar5 = 0xa6f5dfb2;
    uVar3 = uVar4 ^ 0xa0fa029b | uVar3 ^ 0x253afc7;
    uVar4 = 0xb346a6c6;
  }
  else {
    bVar1 = (uint)(uVar6 < 0x40b7bcd2 || 0x40b7bcd2 - uVar6 < (uint)(uVar4 < 0x1032b866)) <=
            0x893dff34 - uVar3;
    if ((int)(0x4fae36de - (uVar2 + (0x893dff33 < uVar3 && bVar1))) < 0 !=
        (SBORROW4(0x4fae36de,uVar2) !=
        SBORROW4(0x4fae36de - uVar2,(uint)(0x893dff33 < uVar3 && bVar1)))) {
      if ((uVar4 == 0x1032b866 && uVar3 == 0x893dff34) &&
          (uVar6 == 0x40b7bcd2 && uVar2 == 0x4fae36de)) {
        return CONCAT44(param_1 + 0x28,1);
      }
      if ((uVar4 == 0xb109aff9 && uVar3 == 0xc8404044) &&
          (uVar6 == 0x301db3b5 && uVar2 == 0x6d37bc02)) {
        return CONCAT44(param_1 + 0x10,1);
      }
      goto LAB_009eb564;
    }
    if ((uVar4 == 0x58e42954 && uVar3 == 0xcc5966d7) && (uVar6 == 0xc0e4d88f && uVar2 == 0xee06a553)
       ) goto LAB_009eb4e0;
    uVar5 = 0xfd8b3b08;
    uVar3 = uVar4 ^ 0x37bddcb1 | uVar3 ^ 0x6115bd6a;
    uVar4 = 0x3deb52c6;
  }
  if (uVar3 == 0 && (uVar6 == uVar4 && uVar2 == uVar5)) {
LAB_009eb4e0:
    return CONCAT44(param_1,1);
  }
LAB_009eb564:
  return (ulonglong)param_1 << 0x20;
}

