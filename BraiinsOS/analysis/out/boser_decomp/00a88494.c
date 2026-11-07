// FUN_00a88494 @ 00a88494 size=676 calls_out=0 calls_in=0
// strings: 

undefined8 FUN_00a88494(int param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = *param_2;
  uVar7 = param_2[1];
  uVar6 = param_2[2];
  uVar3 = param_2[3];
  uVar2 = 1;
  bVar1 = (uint)(uVar7 < 0x87312aaf || 0x87312aaf - uVar7 < (uint)(uVar5 < 0xb612488f)) <=
          0xd2cf6861 - uVar6;
  if ((int)(0x2f7abe98 - (uVar3 + (0xd2cf6860 < uVar6 && bVar1))) < 0 ==
      (SBORROW4(0x2f7abe98,uVar3) !=
      SBORROW4(0x2f7abe98 - uVar3,(uint)(0xd2cf6860 < uVar6 && bVar1)))) {
    if ((uVar5 != 0xc8b5eb6e || uVar6 != 0xb6c55ee9) || (uVar7 != 0xdceed2c0 || uVar3 != 0xca32c100)
       ) {
      if ((uVar5 == 0xa0503d3f && uVar6 == 0x54d3b759) &&
          (uVar7 == 0xcc99eb67 && uVar3 == 0x125cccbf)) goto LAB_00a88698;
LAB_00a8860c:
      if ((uVar5 == 0xd2bc4916 && uVar6 == 0xf2f9e5da) &&
          (uVar7 == 0xc95d4895 && uVar3 == 0x8290fead)) goto LAB_00a88694;
      if ((uVar5 != 0x1ffb37da || uVar6 != 0x23da4434) ||
          (uVar7 != 0xc1a448ba || uVar3 != 0x1ca0bbb1)) {
        if ((uVar5 == 0xf2b1aa71 && uVar6 == 0x254c7a1) &&
            (uVar7 == 0x6753fce6 && uVar3 == 0x8cc0dab0)) {
          iVar4 = 0x418;
        }
        else {
          iVar4 = 0x428;
          uVar2 = (uint)((uVar5 == 0xf90928fa && uVar6 == 0x4b2225da) &&
                        (uVar7 == 0xb20c346f && uVar3 == 0xb4a7102a));
        }
        param_1 = param_1 + iVar4;
        goto LAB_00a88698;
      }
    }
    param_1 = param_1 + 0x420;
  }
  else {
    if (((uVar5 == 0xb612488f && uVar6 == 0xd2cf6861) &&
         (uVar7 == 0x87312aaf && uVar3 == 0x2f7abe98)) ||
       ((uVar5 == 0xdf78a5b6 && uVar6 == 0x70ccd127) && (uVar7 == 0xe822c052 && uVar3 == 0x3fa6e976)
       )) goto LAB_00a88698;
    if ((uVar5 != 0xfb7cd787 || uVar6 != 0xa3d459e8) || (uVar7 != 0x52ff3c50 || uVar3 != 0x480cd24a)
       ) goto LAB_00a8860c;
LAB_00a88694:
    param_1 = param_1 + 0x410;
  }
LAB_00a88698:
  return CONCAT44(param_1,uVar2);
}

