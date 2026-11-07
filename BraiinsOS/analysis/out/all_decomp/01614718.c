// FUN_01614718 @ 01614718 size=2144 calls_out=3 calls_in=0
// strings: ExpectedStructNameUnknownLengthUnicodeTrailingBytesBadBool | UnexpectedCharTrailingCharacters | SuggestRawIdentifierExceededRecursionLimit | outer | MissingStructField | field

void FUN_01614718(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  code *pcVar7;
  char *pcVar8;
  undefined1 *local_1c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = "Fmt";
    goto LAB_01614a30;
  case 1:
    local_1c = param_1 + 4;
    FUN_00fb2828(param_2,"Io",2,&local_1c,&LAB_0157d350);
    return;
  case 2:
    local_1c = param_1 + 4;
    FUN_00fb2828(param_2,"Message",7,&local_1c,&LAB_0157d350);
    return;
  case 3:
    local_1c = param_1 + 4;
    FUN_00fb2828(param_2,"Base64Error",0xb,&local_1c,&LAB_01622218);
    return;
  case 4:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = 
    "EofExpectedArrayExpectedAttributeExpectedAttributeEndExpectedBooleanExpectedCommaExpectedCharExpectedByteLiteralExpectedFloatFloatUnderscoreExpectedIntegerExpectedOptionExpectedOptionEndExpectedMapExpectedMapEnd"
    ;
LAB_01614a30:
                    /* WARNING: Could not recover jumptable at 0x01614a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar3 + 0xc))(uVar1,pcVar2,3);
    return;
  case 5:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = 
    "ExpectedArrayExpectedAttributeExpectedAttributeEndExpectedBooleanExpectedCommaExpectedCharExpectedByteLiteralExpectedFloatFloatUnderscoreExpectedIntegerExpectedOptionExpectedOptionEndExpectedMapExpectedMapEnd"
    ;
    goto LAB_01614d34;
  case 6:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = "ExpectedArrayEnd";
    goto LAB_01614e98;
  case 7:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = 
    "ExpectedAttributeExpectedAttributeEndExpectedBooleanExpectedCommaExpectedCharExpectedByteLiteralExpectedFloatFloatUnderscoreExpectedIntegerExpectedOptionExpectedOptionEndExpectedMapExpectedMapEnd"
    ;
    goto LAB_01614f80;
  case 8:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = 
    "ExpectedAttributeEndExpectedBooleanExpectedCommaExpectedCharExpectedByteLiteralExpectedFloatFloatUnderscoreExpectedIntegerExpectedOptionExpectedOptionEndExpectedMapExpectedMapEnd"
    ;
    goto LAB_01614d54;
  case 9:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = 
    "ExpectedBooleanExpectedCommaExpectedCharExpectedByteLiteralExpectedFloatFloatUnderscoreExpectedIntegerExpectedOptionExpectedOptionEndExpectedMapExpectedMapEnd"
    ;
    goto LAB_01614b3c;
  case 10:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = 
    "ExpectedCommaExpectedCharExpectedByteLiteralExpectedFloatFloatUnderscoreExpectedIntegerExpectedOptionExpectedOptionEndExpectedMapExpectedMapEnd"
    ;
    goto LAB_01614d34;
  case 0xb:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = 
    "ExpectedCharExpectedByteLiteralExpectedFloatFloatUnderscoreExpectedIntegerExpectedOptionExpectedOptionEndExpectedMapExpectedMapEnd"
    ;
    goto LAB_01614ac4;
  case 0xc:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = 
    "ExpectedByteLiteralExpectedFloatFloatUnderscoreExpectedIntegerExpectedOptionExpectedOptionEndExpectedMapExpectedMapEnd"
    ;
    goto LAB_01614a94;
  case 0xd:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = 
    "ExpectedFloatFloatUnderscoreExpectedIntegerExpectedOptionExpectedOptionEndExpectedMapExpectedMapEnd"
    ;
LAB_01614d34:
                    /* WARNING: Could not recover jumptable at 0x01614d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar3 + 0xc))(uVar1,pcVar2,0xd);
    return;
  case 0xe:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = 
    "FloatUnderscoreExpectedIntegerExpectedOptionExpectedOptionEndExpectedMapExpectedMapEnd";
    goto LAB_01614b3c;
  case 0xf:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = "ExpectedIntegerExpectedOptionExpectedOptionEndExpectedMapExpectedMapEnd";
LAB_01614b3c:
                    /* WARNING: Could not recover jumptable at 0x01614b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar3 + 0xc))(uVar1,pcVar2,0xf);
    return;
  case 0x10:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = "ExpectedOptionExpectedOptionEndExpectedMapExpectedMapEnd";
    goto LAB_01614ff8;
  case 0x11:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = "ExpectedOptionEndExpectedMapExpectedMapEnd";
    goto LAB_01614f80;
  case 0x12:
                    /* WARNING: Could not recover jumptable at 0x01614d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0xc))(*param_2,"ExpectedMapExpectedMapEnd",0xb);
    return;
  case 0x13:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = "ExpectedMapColon";
    goto LAB_01614e98;
  case 0x14:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = "ExpectedMapEnd";
    goto LAB_01614ff8;
  case 0x15:
    local_1c = param_1 + 0xc;
    FUN_00fb32e8(param_2,"ExpectedDifferentStructName",0x1b,&DAT_00569b58,8,param_1 + 4,
                 &LAB_0157a210,"foundExpectedStructLike",5,&local_1c,&LAB_0157d350);
    return;
  case 0x16:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = "ExpectedStructLike";
    break;
  case 0x17:
    local_1c = param_1 + 4;
    FUN_00fb2828(param_2,
                 "ExpectedNamedStructLikeExpectedStructLikeEndExpectedUnitExpectedStringExpectedByteStringExpectedStringEndExpectedIdentifier"
                 ,0x17,&local_1c,&LAB_0162209c);
    return;
  case 0x18:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = 
    "ExpectedStructLikeEndExpectedUnitExpectedStringExpectedByteStringExpectedStringEndExpectedIdentifier"
    ;
    goto LAB_01614ae4;
  case 0x19:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = "ExpectedUnitExpectedStringExpectedByteStringExpectedStringEndExpectedIdentifier";
LAB_01614ac4:
                    /* WARNING: Could not recover jumptable at 0x01614ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar3 + 0xc))(uVar1,pcVar2,0xc);
    return;
  case 0x1a:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = "ExpectedStringExpectedByteStringExpectedStringEndExpectedIdentifier";
LAB_01614ff8:
                    /* WARNING: Could not recover jumptable at 0x01615008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar3 + 0xc))(uVar1,pcVar2,0xe);
    return;
  case 0x1b:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = "ExpectedByteStringExpectedStringEndExpectedIdentifier";
    break;
  case 0x1c:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = "ExpectedStringEndExpectedIdentifier";
LAB_01614f80:
                    /* WARNING: Could not recover jumptable at 0x01614f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar3 + 0xc))(uVar1,pcVar2,0x11);
    return;
  case 0x1d:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = "ExpectedIdentifier";
    break;
  case 0x1e:
    local_1c = param_1 + 4;
    FUN_00fb2828(param_2,"InvalidEscapeIntegerOutOfBounds",0xd,&local_1c,&LAB_0162209c);
    return;
  case 0x1f:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = "IntegerOutOfBounds";
    break;
  case 0x20:
    local_1c = param_1 + 1;
    pcVar7 = FUN_01135a50;
    pcVar2 = "base.,";
    pcVar5 = FUN_00fa93dc;
    pcVar8 = "InvalidIntegerDigit";
    puVar4 = &DAT_0041440d;
    uVar6 = 4;
    uVar1 = 5;
    goto LAB_01614de0;
  case 0x21:
    local_1c = param_1 + 4;
    FUN_00fb2828(param_2,
                 "NoSuchExtensionUnclosedBlockCommentUnclosedLineCommentUnderscoreAtBeginning",0xf,
                 &local_1c,&LAB_0157d350);
    return;
  case 0x22:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = "UnclosedBlockCommentUnclosedLineCommentUnderscoreAtBeginning";
LAB_01614d54:
                    /* WARNING: Could not recover jumptable at 0x01614d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar3 + 0xc))(uVar1,pcVar2,0x14);
    return;
  case 0x23:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = "UnclosedLineCommentUnderscoreAtBeginning";
LAB_01614a94:
                    /* WARNING: Could not recover jumptable at 0x01614aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar3 + 0xc))(uVar1,pcVar2,0x13);
    return;
  case 0x24:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = "UnderscoreAtBeginning";
LAB_01614ae4:
                    /* WARNING: Could not recover jumptable at 0x01614af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar3 + 0xc))(uVar1,pcVar2,0x15);
    return;
  case 0x25:
    local_1c = param_1 + 4;
    FUN_00fb2828(param_2,"UnexpectedCharTrailingCharacters",0xe,&local_1c,FUN_016220ac);
    return;
  case 0x26:
    local_1c = param_1 + 4;
    FUN_00fb2828(param_2,&DAT_0041d928,9,&local_1c,FUN_010903d8);
    return;
  case 0x27:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = "TrailingCharacters";
    break;
  case 0x28:
    local_1c = param_1 + 0x10;
    uVar6 = 5;
    pcVar7 = (code *)&LAB_0157d350;
    pcVar2 = "foundExpectedStructLike";
    pcVar5 = (code *)&LAB_00787c90;
    pcVar8 = "InvalidValueForType";
    puVar4 = &DAT_00569b58;
    uVar1 = 8;
LAB_01614de0:
    FUN_00fb32e8(param_2,pcVar8,0x13,puVar4,uVar1,param_1 + 4,pcVar5,pcVar2,uVar6,&local_1c,pcVar7);
    return;
  case 0x29:
    local_1c = param_1 + 4;
    FUN_00fb32e8(param_2,"ExpectedDifferentLengthNoSuchEnumVariant",0x17,&DAT_00569b58,8,param_1 + 8
                 ,&LAB_00787c90,"foundExpectedStructLike",5,&local_1c,FUN_00d47d08);
    return;
  case 0x2a:
    pcVar2 = "NoSuchEnumVariant";
    goto LAB_01614edc;
  case 0x2b:
    pcVar2 = "NoSuchStructField";
LAB_01614edc:
    local_1c = param_1 + 0xc;
    FUN_00fb33c4(param_2,pcVar2,0x11,&DAT_00569b58,8,param_1 + 4,FUN_00aaf12c,
                 "foundExpectedStructLike",5,param_1 + 0x18,&LAB_00787c90,"outer",5,&local_1c,
                 FUN_01620a2c);
    return;
  case 0x2c:
    local_1c = param_1 + 0xc;
    FUN_00fb32e8(param_2,"MissingStructField",0x12,"field",5,param_1 + 4,&LAB_0157a210,"outer",5,
                 &local_1c,FUN_01620a2c);
    return;
  case 0x2d:
    local_1c = param_1 + 0xc;
    FUN_00fb32e8(param_2,"DuplicateStructField",0x14,"field",5,param_1 + 4,&LAB_0157a210,"outer",5,
                 &local_1c,FUN_01620a2c);
    return;
  case 0x2e:
    local_1c = param_1 + 4;
    FUN_00fb2828(param_2,"InvalidIdentifier",0x11,&local_1c,&LAB_0157d350);
    return;
  case 0x2f:
    local_1c = param_1 + 4;
    FUN_00fb2828(param_2,"SuggestRawIdentifierExceededRecursionLimit",0x14,&local_1c,&LAB_0157d350);
    return;
  case 0x30:
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar2 = "ExpectedRawValuemax size reached";
LAB_01614e98:
                    /* WARNING: Could not recover jumptable at 0x01614ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar3 + 0xc))(uVar1,pcVar2,0x10);
    return;
  case 0x31:
                    /* WARNING: Could not recover jumptable at 0x01614a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0xc))(*param_2,"ExceededRecursionLimit",0x16);
    return;
  case 0x32:
    local_1c = param_1 + 4;
    FUN_00fb2828(param_2,"ExpectedStructNameUnknownLengthUnicodeTrailingBytesBadBool",0x12,&local_1c
                 ,&LAB_0157d350);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01614fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar3 + 0xc))(uVar1,pcVar2,0x12);
  return;
}

