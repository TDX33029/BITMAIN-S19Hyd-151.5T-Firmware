// FUN_01665a20 @ 01665a20 size=596 calls_out=6 calls_in=6
// strings: provided length would overflow after adjustmentLengthDelimitedCodecError

void FUN_01665a20(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  
  uVar2 = param_3[2];
  if (*(uint *)(param_2 + 8) < uVar2) {
    FUN_016654c8(&local_30,0x14);
    *param_1 = local_30;
    param_1[1] = local_2c;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0x14);
    if ((int)uVar3 < 0 == uVar2 < uVar3) {
      uVar5 = *(uint *)(param_2 + 0xc);
      uVar2 = uVar2 - uVar3;
      if ((uint)(param_4[2] - param_4[1]) < uVar5 + uVar2) {
        FUN_00f5f538(param_4);
      }
      if (*(char *)(param_2 + 0x18) == '\0') {
        local_34 = 0;
        local_38 = uVar2;
        if (8 < uVar5) goto LAB_01665c68;
        iVar8 = param_4[1];
        iVar6 = param_4[2];
        local_2c = iVar6 - iVar8;
        if (local_2c < uVar5) {
          FUN_00f5f538(param_4,uVar5);
          iVar8 = param_4[1];
          iVar6 = param_4[2];
          local_2c = iVar6 - iVar8;
        }
        iVar7 = *param_4;
        FUN_016dd1aa(iVar7 + iVar8,&local_38,uVar5);
      }
      else {
        if (8 < uVar5) {
LAB_01665c68:
          FUN_00f60108(uVar5,8);
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x1665c74);
          (*pcVar1)();
        }
        iVar8 = param_4[1];
        local_34 = uVar2 * 0x1000000 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                   uVar2 >> 0x18;
        iVar6 = param_4[2];
        local_2c = iVar6 - iVar8;
        local_38 = 0;
        if (local_2c < uVar5) {
          FUN_00f5f538(param_4,uVar5);
          iVar8 = param_4[1];
          iVar6 = param_4[2];
          local_2c = iVar6 - iVar8;
        }
        iVar7 = *param_4;
        FUN_016dd1aa(iVar7 + iVar8,(int)&local_30 - uVar5,uVar5);
      }
      if (uVar5 <= local_2c) {
        iVar8 = iVar8 + uVar5;
        iVar4 = param_3[1];
        uVar5 = param_3[2];
        param_4[1] = iVar8;
        if ((uint)(iVar6 - iVar8) < uVar5) {
          FUN_00f5f538(param_4,uVar5);
          iVar7 = *param_4;
          iVar8 = param_4[1];
        }
        FUN_016dd1aa(iVar7 + iVar8,iVar4,uVar5);
        iVar8 = param_4[1];
        local_2c = param_4[2] - iVar8;
        if (uVar5 <= local_2c) {
          iVar4 = *param_3;
          iVar6 = param_3[1];
          iVar7 = param_3[2];
          *(undefined1 *)param_1 = 4;
          param_4[1] = iVar8 + uVar5;
                    /* WARNING: Could not recover jumptable at 0x01665c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar4 + 0x10))(param_3 + 3,iVar6,iVar7);
          return;
        }
      }
      local_30 = uVar5;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0();
    }
    FUN_015e79d4(&local_30,0x14,
                 "provided length would overflow after adjustmentLengthDelimitedCodecError",0x2f);
    *(undefined2 *)((int)param_1 + 1) = local_30._1_2_;
    *(undefined1 *)((int)param_1 + 3) = local_30._3_1_;
    param_1[1] = local_2c;
    *(undefined1 *)param_1 = (undefined1)local_30;
  }
                    /* WARNING: Could not recover jumptable at 0x01665a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x10))(param_3 + 3,param_3[1],param_3[2]);
  return;
}

