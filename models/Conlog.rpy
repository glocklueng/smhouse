I-Logix-RPY-Archive version 8.6.0 C 4012249
{ IProject 
	- _id = GUID d9430a6f-2929-4849-812a-95c548652024;
	- _myState = 8192;
	- _properties = { IPropertyContainer 
		- Subjects = { IRPYRawContainer 
			- size = 5;
			- value = 
			{ IPropertySubject 
				- _Name = "Activity_diagram";
				- Metaclasses = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IPropertyMetaclass 
						- _Name = "ActorPin";
						- Properties = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IProperty 
								- _Name = "ShowName";
								- _Value = "Name";
								- _Type = Enum;
								- _ExtraTypeInfo = "Name,NameAndType,Type,Label";
							}
						}
					}
				}
			}
			{ IPropertySubject 
				- _Name = "Browser";
				- Metaclasses = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IPropertyMetaclass 
						- _Name = "Settings";
						- Properties = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IProperty 
								- _Name = "ShowOrder";
								- _Value = "True";
								- _Type = Bool;
							}
							{ IProperty 
								- _Name = "ShowPredefinedPackage";
								- _Value = "false";
								- _Type = Bool;
							}
						}
					}
				}
			}
			{ IPropertySubject 
				- _Name = "Format";
				- Metaclasses = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IPropertyMetaclass 
						- _Name = "ActorPin";
						- Properties = { IRPYRawContainer 
							- size = 7;
							- value = 
							{ IProperty 
								- _Name = "DefaultSize";
								- _Value = "0,0,12,12";
								- _Type = String;
							}
							{ IProperty 
								- _Name = "Fill.FillColor";
								- _Value = "255,255,0";
								- _Type = Color;
							}
							{ IProperty 
								- _Name = "Fill.FillColor@Child.PinInArrow";
								- _Value = "$<asParent>LineColor";
								- _Type = Color;
							}
							{ IProperty 
								- _Name = "Fill.FillColor@Child.PinOutArrow";
								- _Value = "$<asParent>LineColor";
								- _Type = Color;
							}
							{ IProperty 
								- _Name = "Font.Size@Label.Name";
								- _Value = "8";
								- _Type = Int;
							}
							{ IProperty 
								- _Name = "Line.LineColor";
								- _Value = "0,0,255";
								- _Type = Color;
							}
							{ IProperty 
								- _Name = "Line.LineWidth";
								- _Value = "1";
								- _Type = Int;
							}
						}
					}
				}
			}
			{ IPropertySubject 
				- _Name = "ObjectModelGe";
				- Metaclasses = { IRPYRawContainer 
					- size = 3;
					- value = 
					{ IPropertyMetaclass 
						- _Name = "Class";
						- Properties = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IProperty 
								- _Name = "ShowPortsInterfaces";
								- _Value = "0";
								- _Type = Bool;
							}
						}
					}
					{ IPropertyMetaclass 
						- _Name = "Object";
						- Properties = { IRPYRawContainer 
							- size = 3;
							- value = 
							{ IProperty 
								- _Name = "ShowAttributes";
								- _Value = "None";
								- _Type = Enum;
								- _ExtraTypeInfo = "All,None,Public,Explicit";
							}
							{ IProperty 
								- _Name = "ShowOperations";
								- _Value = "All";
								- _Type = Enum;
								- _ExtraTypeInfo = "All,None,Public,Explicit";
							}
							{ IProperty 
								- _Name = "ShowPortsInterfaces";
								- _Value = "0";
								- _Type = Bool;
							}
						}
					}
					{ IPropertyMetaclass 
						- _Name = "Requirement";
						- Properties = { IRPYRawContainer 
							- size = 6;
							- value = 
							{ IProperty 
								- _Name = "Compartments";
								- _Value = "ID,";
								- _Type = MultiLine;
							}
							{ IProperty 
								- _Name = "RequirementNotation";
								- _Value = "Box_Style";
								- _Type = Enum;
								- _ExtraTypeInfo = "Note_Style,Box_Style";
							}
							{ IProperty 
								- _Name = "ShowAnnotationContents";
								- _Value = "Specification";
								- _Type = Enum;
								- _ExtraTypeInfo = "Name,Specification,Description,Label";
							}
							{ IProperty 
								- _Name = "ShowForm";
								- _Value = "Pushpin";
								- _Type = Enum;
								- _ExtraTypeInfo = "Plain,Note,Pushpin";
							}
							{ IProperty 
								- _Name = "ShowName";
								- _Value = "Name_only";
								- _Type = Enum;
								- _ExtraTypeInfo = "Full_path,Relative,Name_only,Label";
							}
							{ IProperty 
								- _Name = "ShowStereotype";
								- _Value = "Label";
								- _Type = Enum;
								- _ExtraTypeInfo = "Label,Bitmap,None";
							}
						}
					}
				}
			}
			{ IPropertySubject 
				- _Name = "TestConductor";
				- Metaclasses = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IPropertyMetaclass 
						- _Name = "Settings";
						- Properties = { IRPYRawContainer 
							- size = 6;
							- value = 
							{ IProperty 
								- _Name = "AcknowledgeApplyChanges";
								- _Value = "True";
								- _Type = Bool;
							}
							{ IProperty 
								- _Name = "CreateTestArchitectureMode";
								- _Value = "Standard";
								- _Type = Enum;
								- _ExtraTypeInfo = "Standard,Advanced";
							}
							{ IProperty 
								- _Name = "MapSDToTestArchitectureMode";
								- _Value = "Strict";
								- _Type = Enum;
								- _ExtraTypeInfo = "Strict,Weak";
							}
							{ IProperty 
								- _Name = "OverwriteTestContextDiagram";
								- _Value = "Never";
								- _Type = Enum;
								- _ExtraTypeInfo = "Never,Always,AskUser";
							}
							{ IProperty 
								- _Name = "TestCaseExecutionOrder";
								- _Value = "BrowserOrder";
								- _Type = Enum;
								- _ExtraTypeInfo = "BrowserOrder,DeclarationOrder";
							}
							{ IProperty 
								- _Name = "TestingMode";
								- _Value = "AssertionBased";
								- _Type = Enum;
								- _ExtraTypeInfo = "AnimationBased,AssertionBased";
							}
						}
					}
				}
			}
		}
	}
	- _name = "Conlog";
	- Stereotypes = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IHandle 
			- _m2Class = "IStereotype";
			- _filename = "$OMROOT\\Profiles\\SysML\\SysMLProfile_rpy\\SysML.sbs";
			- _subsystem = "SysML";
			- _class = "";
			- _name = "SysML";
			- _id = GUID 052b8171-a32b-4f45-a829-5585f79f9deb;
		}
	}
	- _lastID = 2;
	- _UserColors = { IRPYRawContainer 
		- size = 16;
		- value = 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 
	}
	- _defaultSubsystem = { ISubsystemHandle 
		- _m2Class = "ISubsystem";
		- _filename = "ActorPkg.sbs";
		- _subsystem = "";
		- _class = "";
		- _name = "ActorPkg";
		- _id = GUID 121fda32-adaa-4a8c-881a-2daff8161336;
	}
	- _component = { IHandle 
		- _m2Class = "IComponent";
		- _filename = "ModelExecutionUc1.cmp";
		- _subsystem = "";
		- _class = "";
		- _name = "ModelExecutionUc1";
		- _id = GUID cbb7a655-9c0d-4069-943b-f5bd390238f7;
	}
	- Multiplicities = { IRPYRawContainer 
		- size = 4;
		- value = 
		{ IMultiplicityItem 
			- _name = "1";
			- _count = 2;
		}
		{ IMultiplicityItem 
			- _name = "*";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "0,1";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "1..*";
			- _count = -1;
		}
	}
	- Subsystems = { IRPYRawContainer 
		- size = 8;
		- value = 
		{ ISubsystem 
			- fileName = "ActorPkg";
			- _id = GUID 121fda32-adaa-4a8c-881a-2daff8161336;
		}
		{ ISubsystem 
			- fileName = "FunctionalAnalysisPkg";
			- _id = GUID 9a581458-0ee7-4ff3-8781-572dc2f0bc65;
		}
		{ ISubsystem 
			- fileName = "DesignSynthesisPkg";
			- _id = GUID 1e033ad7-3220-469b-9334-1f56eae8d2f6;
		}
		{ ISubsystem 
			- fileName = "InterfacesPkg";
			- _id = GUID 9e985f4f-d319-4919-bdac-f32ea101a61d;
		}
		{ ISubsystem 
			- fileName = "RequirementsAnalysisPkg";
			- _id = GUID 22970381-e1bf-4407-a03f-4746da3c9c9f;
		}
		{ ISubsystem 
			- fileName = "TypesPkg";
			- _id = GUID b8ab0134-15fb-4969-84c8-9192784cf1f1;
		}
		{ IProfile 
			- fileName = "SysML";
			- _persistAs = "$OMROOT\\Profiles\\SysML\\SysMLProfile_rpy";
			- _id = GUID d9689b73-885e-44c4-896b-de43defa0a33;
			- _isReference = 1;
		}
		{ IProfile 
			- fileName = "HarmonySE";
			- _persistAs = "$OMROOT\\Profiles\\HarmonySE";
			- _id = GUID 29d4fccc-40d9-4cb3-af8a-d7464f198819;
			- _isReference = 1;
		}
	}
	- Diagrams = { IRPYRawContainer 
		- size = 0;
	}
	- Components = { IRPYRawContainer 
		- size = 2;
		- value = 
		{ IComponent 
			- fileName = "ModelExecutionUc1";
			- _id = GUID cbb7a655-9c0d-4069-943b-f5bd390238f7;
		}
		{ IComponent 
			- fileName = "ModelExecutionUc2";
			- _id = GUID 410b10b8-512d-437a-9731-e5445e0e6b92;
		}
	}
}

